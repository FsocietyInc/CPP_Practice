/*  
    Statement:
    
    Program to swap two numbers without temp variable by formula.

    Author: Prasad Chavan
    Nov 21, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int varA, varB;

    cout << "Enter values of variable A and B respectively: ";
    cin >> varA >> varB;

    cout << "\nBefore Swapping:" << endl;
    cout << "variable A = " << varA << " and Variable B = " << varB << endl;

    varA = varA + varB; // Eg. A = 10, B = 20 then A = 30 
    varB = varA - varB; // B = 30 - 20 = 10 "It's Swapped now"
    varA = varA - varB; // A = 30 - 10 = 20 "It's Swapped now"

    cout << "\nAfter Swapping:" << endl;
    cout << "variable A = " << varA << " and Variable B = " << varB << endl;

    return 0;

}
