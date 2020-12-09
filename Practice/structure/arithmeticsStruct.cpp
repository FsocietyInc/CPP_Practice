/*
 * Statement:
 *
 * Program to perform arithmetics using struct.
 *
 * Author: Prasad Chavan
 *
 * Dec 7, 2020
 *
 */

#include <iostream>

using namespace std;

struct arithmeticsStruct
{
    
    float numOne, numTwo;
}arthData;



int main() {

    cout << "\nEnter two numbers to perform arithmetic operations: ";
    cin >> arthData.numOne >> arthData.numTwo;

    cout << "\nAddition of " << arthData.numOne << " + " << arthData.numTwo << " = " << arthData.numOne + arthData.numTwo;
    cout << "\nSubtraction of " << arthData.numOne << " - " << arthData.numTwo << " = " << arthData.numOne - arthData.numTwo;
    cout << "\nMultiplication of " << arthData.numOne << " * " << arthData.numTwo << " = " << arthData.numOne * arthData.numTwo;
    cout << "\nDivision of " << arthData.numOne << " / " << arthData.numTwo << " = " << arthData.numOne / arthData.numTwo;
   
    return 0;
}
