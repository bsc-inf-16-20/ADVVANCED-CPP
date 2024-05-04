#include <iostream>
#include <string>
#include <vector>
using namespace std;

 int main() {

     string   groups[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
     int size =sizeof(groups)/ sizeof(groups[0]);
     //loop
     for ( int k =0; k < size; k++){
 if(groups[k][0]=='B'){
    cout<<groups[k]<<endl;
 }
     }


return 0;



 }