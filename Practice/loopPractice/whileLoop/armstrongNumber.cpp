/*  
    Statement:
    
    Program to check if number is armstrong or not with while loop.
    
    Author: Prasad Chavan
    Nov 24, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int number = 0, tempNum, cube, sum, digit;

    cout << "Enter the number to check if it is armstrong or not: ";
    cin >> number;
    tempNum = number;

    if ( number != 0){

        while ( tempNum != 0){
            digit = tempNum % 10;
            cube = digit * digit * digit;
            sum += cube;
            tempNum /= 10;
        }   
    }

    if ( sum == number){
        cout << "\n\nYou have entered " << number << ", and it is an armstrong number" << "\n";
    }

    else {
        cout << "\n\nYou have entered " << number << ", and it is an armstrong number" << "\n";   
    }

    return 0;
}
    
