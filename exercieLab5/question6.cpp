#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>

using namespace std;

int count_vowels(const string& text){
    string vowels ="aeiouAEIOU";
    int count = 0;
    for (char c : text){
        if (vowels.find(c) != string::npos){
            count++;
        }
    }
    return count;


}

// int count_words(const string& text){
//     int count = 0;
//     size_t pos =0;
//     while ((pos = text.find_first_not_of("",pos)) != string::npos){
//         count++;
//         pos =text.find_first_of("",pos);
//     }
//    return count; 
    
// }


int count_words(const string& text){
    int count = 0;
    bool in_word = false;
    for(char c : text){
        if(isspace(c)){
            in_word = false;
        }
        else if (!in_word){
            count++;
            in_word =true;
        }
    }
    return count;
}

string reverse(string& text){
    string reversed_text =text;
    reverse(reversed_text.begin(), reversed_text.end());
    return reversed_text;
}

string capitalize_second_letter(const string& text){
    string capitalized_text =text;
    bool capitalize = true;
    for(char& c : capitalized_text){
        if(isspace(c)){
            capitalize =true;
        }
        else if(capitalize && isalpha(c)){
            c= toupper(c);
            capitalize = false;
        }
    }
    return capitalized_text;
}

int main(){
    ifstream file("file.txt");
    if(!file.is_open()){
        
        cout<<"error opening file"<< endl;

        return 1;
    }

    string file_data;
    getline(file,file_data);

    cout<<"number of vowels: "<< count_vowels(file_data)<<endl;
    cout<<"number of words: "<<count_words(file_data)<<endl;
    cout<<"Reversed statement: "<< reverse(file_data) << endl;
    cout<<"Capitalized second letter: " <<capitalize_second_letter(file_data)<<endl;

    file.close();
    return 0;
}