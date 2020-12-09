/*
 * Statement:
 *
 * Program to understand pointer to string.
 *
 * Author: Prasad Chavan
 *
 * Dec 9, 2020
 *
 */

#include <iostream>

using namespace std;

int main() {

    int i;
    char a[20] = "PRASAD", *ptr;
    ptr = &a[0];
    while(*ptr != 0) {

        cout << "\nCharacter: " << *ptr << "\tAddress of character: " << ptr;
        *ptr++;
    }

    return 0;
}
