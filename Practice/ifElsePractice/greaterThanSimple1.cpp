/*  
    Statement:
    
    Program to check greater number of two inputs
    (With only one condition).

    Author: Prasad Chavan
    Nov 21, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int numOne, numTwo;

    cout << "Enter values of first number and second respectively: ";
    cin >> numOne >> numTwo;

    if ( numOne < numTwo){
        cout << "\n\n" << numTwo << " is greater than " << numOne << endl;
    }

    return 0;

}