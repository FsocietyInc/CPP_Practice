/*
 * Statement:
 * 
 * Program to find area of desired shape with switch statement.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 27, 2020
 *
 */

#include <iostream>

using namespace std;
const float PI = 3.1415;

int main(){

    int shapeN;
    double radius, side, length, width, base, height;

    
    cout << "\n1. Circle\n2. Square\n3. Rectangle\n4. Triangle\n\n";
    cout << "Choose option number of shape to find area: ";
    cin >> shapeN;

    switch (shapeN)
    {
    case 1:
        cout << "You've chosen to find area of Circle.\n";
        cout << "Enter the value of radius: ";
        cin >> radius;
        cout << "Area of Circle: " << PI * radius * radius;
        break;
    
    case 2:
        cout << "You've chosen to find area of Square.\n";
        cout << "Enter the value of side: ";
        cin >> side;
        cout << "Area of Square: " << side * side;
        break;
        
    case 3:
        cout << "You've chosen to find area of Rectangle.\n";
        cout << "Enter the value of Rectangle: ";
        cin >> length >> width;
        cout << "Area of Rectangle: " << length * width;
        break;
    
    case 4:
        cout << "You've chosen to find area of Triangle.\n";
        cout << "Enter the value of Triangle: ";
        cin >> base >> height;
        cout << "Area of Circle: " << 1/2 * base * height;
        break;
    
    default:

        cout << "Invalid choice code, enter correct choice";
        break;
    }

    return 0;
}