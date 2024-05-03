#include <iostream>
#include <string>
using namespace std;

int main(){
    int pin;
    string withdraw;
    string deposit;
    string checkBalance;
    string payUtilities;
    string others;

    cout<<"welcome to our bank"<<endl <<endl;

    cout<<"enter your pin:";
    cin>>pin;
    cout<<pin<<endl<<endl;

    cout<<"select transaction you want to make:"<<endl <<endl;
    cout<<" 1. widthdraw\n" " 2. deposit\n" " 3. checkBalance\n" " 4. payUtilities\n" " 5. others.."<<endl <<endl;

   int transaction;

   do{
    if (transaction == 1, 2, 3, 4, 5){
        cout<<"enter your transaction:";
    
       }
   
    

  else{
    cout <<"wrong transaction--try again :";
    }
   
        cin>> transaction;
     }
          while (transaction !=3);
          
          cout<<"checkBalance"<<endl;
         cin>>checkBalance;
         cout<<"thats your balance thank you";
         

    return 0;
           }
