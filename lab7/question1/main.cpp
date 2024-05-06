#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rect;

    float length, width;

    // Prompt user for length and width
    cout<< "Enter length of the rectangle: " <<endl;
    cin>> length;
    cout << "Enter width of the rectangle: " <<endl;
    cin >> width;

    // Set length and width of the rectangle
    rect.setLength(length);
    rect.setWidth(width);

    // Calculate and output area
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
