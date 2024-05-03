#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    //initialising variables

    int a =21;
    int b = 10;
    int c ;

    // operations

    c = a+b ;
    cout<<"the sum of two numbers is: "<<c <<endl;

    c = a-b;
    cout<<"The value of c is: "<<c <<endl;

    c = a*b;
    cout<<"The product of two numbers is: "<<c <<endl;

    c= a/b;
    cout<<"The value of c is: "<<c <<endl;

    c =a % b;
    cout<<"the modulus is: "<<c <<endl;

    c = a++;
    cout<<"the crement of a is: " <<c <<endl;

    c = a--;
    cout<<"the decrement of a is: "<<c <<endl;


    return 0;
}