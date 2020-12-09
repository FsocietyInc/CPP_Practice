/*
 * Statement:
 *
 * Program to calculate factorial with help of recursion.
 *
 * Author: Prasad Chavan
 *
 * Dec 7, 2020
 *
 */

#include <iostream>

using namespace std;

int factorial(int);

int main() {

    int fact, value;

    cout << "\nEnter any positive number: ";
    cin >> value;

    fact = factorial(value);
    cout << "\nFactorial of a number is: " << fact;

    return 0;
}

int factorial(int n) {

    if(n < 0) {

        return(-1);
    }

    if(n == 0) {

        return(1);
    }

    else {

        return(n*factorial(n - 1));
    }
}
