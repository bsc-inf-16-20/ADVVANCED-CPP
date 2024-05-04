#include<iostream>
#include<limits>


using namespace std;
int main(){
    int integer;

    // prompt the user to enter an integer between 5 and 10
    cout<<"Enter an integer between 5 and 10: "<<endl;
    cin>>integer;

    //while loop until the valid integer is provided

    while (true)
    {
        if (!(cin>>integer)){
            //clear the input buffer
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<" invalid number. please enter an integer value."<<endl;
        }
        else if(integer <5 || integer >10){
            cout<<"the number must be between 5 and 10. please try again: ";
        }
        else{
            break;
        }
   }
    cout<<"your input value  "<< integer <<" has been accepted."<<endl;
    return 0;

}