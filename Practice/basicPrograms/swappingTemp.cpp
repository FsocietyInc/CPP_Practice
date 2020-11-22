/*   
    Statement:

    Program to swap two numbers with temp variable.

    Author: Prasad Chavan
    Nov 21, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int varA, varB, temp;

    cout << "Enter values of variable A and B respectively: ";
    cin >> varA >> varB;

    cout << "\nBefore Swapping:" << endl;
    cout << "variable A = " << varA << " and Variable B = " << varB << endl;

    temp = varB;
    varB = varA;
    varA = temp;

    cout << "\nAfter Swapping:" << endl;
    cout << "variable A = " << varA << " and Variable B = " << varB << endl;

    return 0;

}
