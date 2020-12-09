/*
 * Statement:
 *
 * Program to make subtract() function with arguments and return value.
 *
 * Author: Prasad Chavan
 *
 * Dec 2, 2020
 *
 */

#include <iostream>

using namespace std;

int sub(int x, int y);

int main(){

    int numOne, numTwo;

    cout << "\nEnter two integers to perform subtraction: ";
    cin >> numOne >> numTwo;

    cout << "\nSubtraction: " << sub(numOne, numTwo);
   
    return 0;
}

int sub(int x, int y){

    int result;
    result = x - y;

    return(result);
}