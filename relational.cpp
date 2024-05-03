#include<iostream>
#include<vector>
using namespace std;

int main(){
    //initializer_list
    int a = 21;
    int b =10;
    int c;
    // operations
    if (a && b){
        cout<<"condition is true"<<endl;
    }
    if (a||b){
        cout<<"confition is true"<<endl;
    }
    //lets change the values
    a =0;
    b =10;

    if(a && b){
        cout<<"conditon is true"<<endl;
    }
     else{
        cout<<"conditon not true"<<endl;
     }
     return 0;

}