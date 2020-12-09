/*
 * Statement:
 *
 * Program to get familiar with functions by doing simple functions.
 *
 * Author: Prasad Chavan
 *
 * Dec 2, 2020
 *
 */

#include <iostream>

using namespace std;

int numOne, numTwo;

int add(){

    cout << "\n\n\nAddition: " << numOne << " + " << numTwo << " = " << numOne + numTwo;
    return 0;
};
int subtract(){

    cout << "\n\n\nSubtraction: " << numOne << " - " << numTwo << " = " << numOne - numTwo;
    return 0;
};
int multi(){

    cout << "\n\n\nMultiplication: " << numOne << " * " << numTwo << " = " << numOne * numTwo;
    return 0;
};
int divide(){

    cout << "\n\n\nDivision: " << numOne << " / " << numTwo << " = " << numOne / numTwo;
    return 0;
};


int main(){

    cout << "\n\nEnter two integer values to perform arithmetics: ";
    cin >> numOne >> numTwo;
    
    add();
    subtract();
    multi();
    divide();

    return 0;
}