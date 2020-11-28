/*  
    Statement:
    
    Program to check if number is Palindrome or not with do while loop.
    
    Author: Prasad Chavan
    Nov 27, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int number, remainder, reverse = 0, pNum;

    cout << "Enter an integer to check if it is palindrome: ";
    cin >> number;
    pNum = number;

    if ( number != 0){

        while ( number != 0) {

            remainder = number % 10;
            reverse = reverse * 10 + remainder;
            number /= 10;
        }

        cout << "\nReverse number of " << pNum << " is " << reverse << "\n";

        if ( pNum == reverse) {
            cout << "Entered number is a palindrome number.\n";
        }
        else{
            cout << "Entered number is not a palindrome number.\n";
        }
    }

    else
    {
        cout << "Input can't be '0'." << endl; 
    }
    
    
    return 0;

}