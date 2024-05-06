#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {


    float length, width;

    // Prompt user for length and width
    cout<< "Enter length of the first rectangle: " <<endl;
    cin>> length;
    cout << "Enter width of the first rectangle: " <<endl;
    cin >> width;

//using overloaded constructor
    Rectangle rectangle1(length,width);

    cout<<"Enter the length of the second rectangle: "<<endl;
    cin>>length;
    cout<<"Enter the width of the secong rectangle: "<<endl;
    cin>>width;

 // using overloaded contructor
    Rectangle rectangle2(length, width);

  float area1 = rectangle1.calculateArea();
  float area2 = rectangle2.calculateArea();

  cout<<"The area of the first rectangle is: " << area1 <<endl;
  cout<<"The area of the second rectangle is : " <<area2 <<endl;
    // Set length and width of the rectangle
    //rect.setLength(length);
    //rect.setWidth(width);

    // Calculate and output area
    //cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
