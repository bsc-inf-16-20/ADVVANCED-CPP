#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 20;
    int c;

    if(a && b){
        cout<<"line 1 - condition is true " <<endl;
 }
 if( a|| b){
    cout<<"loine 2 condition is true " << endl;
 }
 /* let's change the value of and b*/
 a = 0;
 b= 10;
 if (a && b){
    cout<<"line 3 condition is true " << endl;
 }
 else{
    cout<<" line 4 - conditionn is not true " << endl;
 }
 if(!(a && b)){
    cout<<"line5 condition is true "<< endl;
 }

 return 0;
}