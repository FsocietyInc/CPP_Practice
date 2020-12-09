/*
 * Statement:
 *
 * Program to print address of variable and its value.
 *
 * Author: Prasad Chavan
 *
 * Dec 9, 2020
 *
 */

#include <iostream>

using namespace std;

int main() {

    int var = 20;

    cout << "\nValue of variable var: " << var;
    cout << "\nAddress of variable var: " << &var;
    return 0;
}
