/*
 * Statement:
 *
 * Program to try call by value in functions.
 *
 * Author: Prasad Chavan
 *
 * Dec 9, 2020
 *
 */

#include <iostream>

using namespace std;

void swap(int *x, int *y) {

    int swap;

    swap = *x;
    *x = *y;
    *y = swap;
};

int main() {

    int x = 500, y = 100;
    swap(&x, &y);
    
    cout << "\nValue of the x is: " << x << endl;
    cout << "\nValue of the y is: " << y << endl;
    
    return 0;
}