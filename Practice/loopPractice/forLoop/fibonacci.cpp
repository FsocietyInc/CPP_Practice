/*  
    Statement:
    
    Program to print fibonacci series with for loop.
    
    Author: Prasad Chavan
    Nov 25, 2020

*/

#include <iostream>

using namespace std;

int main() {

    int numLast, numOne = 0, numTwo = 1, result, i;

    cout << "Enter the size of fibonacci series: ";
    cin >> numLast;
    if ( numLast == 0 ) {
        cout << "\n" << numOne << endl;
    }
    else {

        cout << numOne << "\t" << numTwo << "\t";
        for ( i = 1; i < numLast; i++) {
            result = numOne + numTwo;
            cout << result << "\t";
            numOne = numTwo;
            numTwo = result;
        }
    }

    return 0;
}