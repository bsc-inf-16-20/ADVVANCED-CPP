#include<iostream>
#include<cmath>

using namespace std;


    //function to calculate the area of triangle
    double areaOfATriangle(double width, double heigth){
        return 0.5 *  width * heigth;
    }
    //function to calculate the area of rectangle
    double areOfARectangle(double length , double width){
        return length * width;
    }
    // function to calculate the area of a square
    double areaOfASquare(double side){
        return side *side;
    }

int main(){
    char choice;
     do
     {
        cout<<"please select the area of a shape to calculate " <<endl;
        cout <<"1. Triangle " << endl;
        cout <<"2. Rectangle " << endl;
        cout <<"3. Square "<< endl;
        cout << " Enter your choice (1,2 or 3). or 'q' to  quit ";
        cin >> choice;

        switch (choice)
        {
        case '1':{
            double width , heigth;
            cout<<"Enter the width of the Triangle: ";
            cin>>width;
            cout<<"Enter the height of the triangle: ";
            cin>>heigth;
            cout<<"Area of the Triangle " << areaOfATriangle(width,heigth) <<endl;
            
             break;
        }

        case '2':{
            double width ,length;
         cout<<"Enter the width of the Rectangle: ";
            cin>>width;
            cout<<"Enter the length of the Rectangle: ";
            cin>>length;
            cout<<"Area of the Rectangle " << areOfARectangle(width,length) <<endl;
            break;

        }
        case '3':{
            double side;
            cout<<"enter the side length of the square: ";
            cin>>side;
            cout<<"Area of the square: "<<areaOfASquare(side)<<endl;
            break;

        }
        case 'q':
        cout<<"Existing the program ..."<<endl;
        break;
           
        default:
            cout<<"Invalid input. please enter a valid choice. " <<endl;
            break;
        }
    }
    while (choice != 'q');
    return 0;
}