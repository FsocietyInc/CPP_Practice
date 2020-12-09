/*
 * Statement:
 *
 * Program to make subtract() function without arguments and without return value.
 *
 * Author: Prasad Chavan
 *
 * Dec 2, 2020
 *
 */

#include <iostream>

using namespace std;

int sub();

int main(){

    sub();
   
    return 0;
}

int sub(){

    int numOne, numTwo, result;

    cout << "\nEnter two integers to perform subtraction: ";
    cin >> numOne >> numTwo;
    
    result = numOne - numTwo;

    cout << "\nSubtraction: " << result;
}
