/*  
    Statement:
    
    Program to check smallest number of three inputs.
    
    Author: Prasad Chavan
    Nov 23, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int numOne, numTwo, numThree;

    cout << "Enter three numbers to compare: ";
    cin >> numOne >> numTwo >> numThree;

    cout << "\nFirst number  : " << numOne << endl;
    cout << "\nSecond number : " << numTwo << endl;
    cout << "\nThird number  : " << numThree << endl;

    if ( numOne < numTwo){
        if ( numOne < numThree){
            cout << "\n\n" << numOne << " is the smallest among the given data.";
        }

        else {
            cout << "\n\n" << numThree << " is the smallest among the given data.";
        }
    }

    else {
        if ( numTwo < numThree){
            cout << "\n\n" << numTwo << " is the smallest among the given data.";
        }

        else {
            cout << "\n\n" << numThree << " is the smallest among the given data.";
        }
    }

    return 0;

}