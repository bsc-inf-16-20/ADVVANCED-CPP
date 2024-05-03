#include <iostream>

using  namespace std;

   int main() {
    
    int MyList[7] = {41, 42, 43, 44, 45, 46, 47};

    
     for (int i = 0; i < 7; i++)
     {
    cout << "The address is "<< MyList + i <<" "<< "The value is "<< *(MyList + i)<<endl;
     }
     


        









   }