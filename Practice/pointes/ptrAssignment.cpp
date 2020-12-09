/*
 * Statement:
 *
 * Program to to assign pointers and use of double pointer or pointer to pointer.
 *
 * Author: Prasad Chavan
 *
 * Dec 9, 2020
 *
 */

#include <iostream>

using namespace std;

int main() {

    int varA, *ptrA, **ptrB;

    varA = 10;
    ptrA = &varA;
    ptrB = &ptrA;
    *ptrB = ptrA;

    cout << "\nValue of varable varA: " << varA;
    cout << "\nAddress of variable varA: " << ptrA;

    cout << "\nValue of pointer ptrA: " << *ptrA;
    cout << "\nAddress of pointer ptrA: " << ptrB;

    cout << "\nValue of double pointer **ptrB: " << **ptrB;
    cout << "\nAddress of double pointer **ptrB: " << *ptrB;

    return 0;
}
