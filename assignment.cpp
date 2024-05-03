#include<iostream>
using namespace std;

int main(){
    //initializer_list
    int a =21;
    int c;

    //operations

    c = a;
    cout<<"the operator of equal sign is: "<<c <<endl;

    c += a;
    cout<<"the += operator value is: "<<c <<endl;

    c -=a;
    cout<<"the -= operator value is: "<<c <<endl;

    c *= a;
    cout<<"the *= operator value is: "<<c <<endl;

    c /= a;
    cout<<" /= operator value is: "<<c <<endl;

    c = 200;
    c %= a;
    cout<<"the %= operator value is:"<<c <<endl;

    c >>= 2;
    cout<<"the >>= operator value is: "<<c <<endl;

    c <<= 2;
    cout<<"the <<= operator value is:"<<c <<endl;

    c &= 2;
    cout<<"the &= operator value is: "<<c <<endl;

    c ^= 2;
    cout<<"the ^= operator value is: "<<c <<endl;

    c |= 2;
    cout<<"the |= operator value is: "<<c <<endl;

    c != 2;
    cout<<"the != operator value is: "<<c <<endl;

    return 0;
    

}