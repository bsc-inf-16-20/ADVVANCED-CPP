#include<iostream>

using namespace std;
void swapNumbers(int& varA, int& varB){
    int chim =varA;
     varA = varB;
    varB = chim;
}
int main(){

    int varA = 25;
    int varB =100;

    cout <<"varA before swap: " << varA <<endl; // ends; // varA is 25
    cout <<" varB before swap: " <<varB << endl;// varB is 100

    swapNumbers(varA,varB);

    cout<<"varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;

    return 0;

}