/*
 * Statement:
 *
 * Program to print address of variable and its pointer.
 *
 * Author: Prasad Chavan
 *
 * Dec 9, 2020
 *
 */

#include <iostream>

using namespace std;

int main() {

    int var;
    int *ptr;

    var = 10;
    ptr = &var;
    cout << "\nThe value of pointer: " << *ptr;
    cout << "\nThe address of pointer: " << ptr;
    return 0;
}
