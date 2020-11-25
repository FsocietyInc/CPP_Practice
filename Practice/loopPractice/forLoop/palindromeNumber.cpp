/*  
    Statement:
    
    Program to check if number is palindrome or not with for loop.
    
    Author: Prasad Chavan
    Nov 25, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int number, remainder, reverse = 0, pmNum;

    cout << "Enter an integer to check if it is palindrome: ";
    cin >> number;
    pmNum = number;

    if (number != 0){
        for ( number; number != 0; number /= 10) {
            remainder = number % 10;
            reverse = reverse * 10 + remainder;
        }
    }

    cout << "\nReverse number of " << pmNum << " is " << reverse << "\n";

    if ( pmNum == reverse) {
        cout << "Entered number is a palindrome number.\n";
    }
    else{
        cout << "Entered number is not a palindrome number.\n";
    }
    
     return 0;
}