#include<iostream>
using namespace std;

int main(){
    int count = 5;
    short status =2;
    char letter ='A';
    string s("ABC");

int* pCount;
short* pStatus;
char* pLetter;
string* PString;

 pCount =&count;
 pStatus = &status;

 cout<<"the of the count:" << count<<endl;
 cout<<"the address of the count is :" <<&count<<endl;
 cout<<" the value of pcount is :"<<pCount<<endl<<endl;

 //count<<"the address of the pcount is: "<<&pcount<<endl;
  cout<<"the of the status:" << status<<endl;
  cout<<"the address of the status is :" <<&status<<endl;
  cout<<" the value of pstatus is :"<<pStatus<<endl<<endl;

 cout<<"the of the letter:" << letter<<endl;
 cout<<"the address of the letter is :" <<&letter<<endl;
  cout<<" the value of pletter is :"<<pLetter<<endl<<endl;

 cout<<"the of the s is :" << s<<endl;
 cout<<"the address of the s is :" <<&s<<endl;
  cout<<" the value of ps  is :"<<PString<<endl<<endl;


}
