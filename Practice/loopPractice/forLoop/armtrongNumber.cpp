/*  
    Statement:
    
    Program to check if number is armstrong or not with for loop.
    
    Author: Prasad Chavan
    Nov 25, 2020

*/

#include <iostream>

using namespace std;

int main() {

    int num, sum, digit, cube, tempNum;

    cout << "Enter the number to check if it is an armstrong number: ";
    cin >> num;
    tempNum = num;
    
    if ( num != 0) {
        for ( num; num != 0; num /= 10) {
            digit = num % 10;
            cube = digit * digit * digit;
            sum += cube;
        }

        if ( tempNum == sum) {
            cout << "\nEntered number is " << tempNum << ", and it is an armstrong number.";
        }

        else
            cout << "\nEntered number is " << tempNum << ", and it is not an armstrong number.";

    }

    return 0;
}