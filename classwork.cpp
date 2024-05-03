#include <iostream>
using namespace std;
namespace one
{
    //variable declaration
    int exampleVariable;
    //function declaration
    void helloworld ();
}

using namespace one;

int main(){
    exampleVariable = 20;
    helloworld();
    return 0;
}
void one :: helloworld()
{
    cout <<"helloworld!" ;
};