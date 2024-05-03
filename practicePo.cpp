#include<iostream>

using namespace std;

int main(){
    double budget =10;
    string name ="chimwemwe";
    int age =21;
    string school ="viyele";

    double* pBudget;
    string* pName;
    int* pAge;
    string * pSchool;

    pName = &name;

    cout<<"the name is: " <<name <<endl;
    cout<<"the address pointer of name is: "<<pName <<endl <<endl;
    cout<<"the address of the name is: " <<&name <<endl;
 
    cout<<"the age is: " <<age <<endl;
    cout<<"the address pointer of age is: "<<pAge <<endl <<endl;
    cout<<"the address of the age is: " <<&age <<endl;

    // cout<<"the school is: " <<school <<endl;
    // cout<<"the address of the school is: " <<&school <<endl;
    // cout<<"the address pointer of school is: "<<pSchool <<endl <<endl;

    // cout<<"the budget is: " <<budget <<endl;
    // cout<<"the address of the budget is: " <<&budget <<endl;
    // cout<<"the address pointer of budget is: "<<pBudget <<endl <<endl;
}