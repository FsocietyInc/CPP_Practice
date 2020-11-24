/*  
    Statement:
    
    Program to check greater number of three inputs.
    
    Author: Prasad Chavan
    Nov 23, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int numOne, numTwo, numThree;

    cout << "Enter three number to compare: ";
    cin >> numOne >> numTwo >> numThree;

    cout << "\nFirst number is  : " << numOne;
    cout << "\nSecond number is : " << numTwo;
    cout << "\nThird number is  : " << numThree;

    if ( numOne > numTwo){
        if (numOne > numThree){
            cout << "\n\n" << numOne << " is greatest among the given data.";
        }

        else {
            cout << "\n\n" << numThree << " is greatest among the given data.";
        }
    }

    else {
        if ( numTwo > numThree){
            cout << "\n\n" << numTwo << " is greatest among the given data.";
        }
        
        else {
            cout << "\n\n" << numThree << " is greatest among the given data.";
        }
    }

   return 0;
}
