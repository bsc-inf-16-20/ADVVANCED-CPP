#include<iostream>
 using namespace std;

 int main(){
    int a =21;
    int b = 10;
    int c;

    c = a + b ;
    cout<< " line 1 - value of c : " <<c << endl;

    c = a-b ;
    cout<< "Line 2 - value of c is : " << c << endl;

    c = a * b;
    cout << "line3 - value of c is : " << c << endl;

    c =a / b;
    cout<< " line 4 - value of c is : " << c << endl;

    c = a % b;
    cout<<"line 5 - value of c is : " <<c <<endl;

    c = a++;
    cout <<"line 6 - value of c is : "<< c << endl;

    c = a--;
    cout<<"line7 -value of c is: " << c << endl;

    return 0;
 }