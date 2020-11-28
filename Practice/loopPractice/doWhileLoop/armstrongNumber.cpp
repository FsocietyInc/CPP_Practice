/*  
    Statement:
    
    Program to check if number is armstrong or not with while loop.
    
    Author: Prasad Chavan
    Nov 27, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int sum, number, digit, cube, tempNum;

    cout << "Enter a number to check if it is an armstrong number: ";
    cin >> number;
    tempNum = number;

    do {
        digit = tempNum % 10;
        cube = digit * digit * digit;
        sum += cube;
        tempNum /= 10;
    } while ( tempNum != 0);

    if ( tempNum == sum) {
            cout << "\nEntered number is " << number << ", and it is an armstrong number.";
        }

    else
        cout << "\nEntered number is " << number << ", and it is not an armstrong number.";

    return 0;
}


