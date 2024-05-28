#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main(){
    Triangle  tria;
    Rectangle rect;
    
    rect.SetValues(4,5);
    tria.SetValues(4,5);
    cout<< rect.Area() << endl;
    cout<<tria.Area() << endl;
    return 0;
}


