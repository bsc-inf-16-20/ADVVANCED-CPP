#include<iostream>
#include"Square.h"
#include "Triangle.h"
#include"Circle.h"
#include"Area.h"

 using namespace std;

using namespace shapes;

int main(){
    int choice;
    do{
        cout<<"choose an option: "<<endl;
        cout<<"1. Calculate the area of a square " <<endl;
        cout<<"2. Calculate the area of  atriangle " <<endl;
        cout<<"3. Calculate the area of a circle "<<endl;
        cout<<"4. Quit " <<endl;
        cin>> choice;

        switch (choice){
            case1: {
                float side;
                cout<<"Enter the side length of a square: "<<endl;
                cin >> side;
                Square square(side);
                cout<<"Area of the square : " << Area::calculateArea(square) <<endl;
                break;
            }
            case 2:{
                float base, height;
                cout<<" Enter the base of the triangle: " <<endl;
                cin>>base;
                cout<<"Enter the hieght of the triangle: "<<endl;
                cin>>height;
                Triangle triangle(base, height);
                cout<<"Area of the triangle: "<<Area::calculateArea(triangle) << endl;
                break;
            
            }
            case 3:{
                float radius;
                cout<<"Enter the radius of the circle: " <<endl;
                cin>> radius;
                Circle circle(radius);
                cout<<"Area of the circle : "<<Area::calculateArea(circle)<<endl;
                break;
            }

            case 4:
            cout<<"Exiting the program..." <<endl;
            break;
            default:
            cout<<"Invalid choice. Please try again. " <<endl;

        }
    }
    while(choice != 4);
    return 0;
}