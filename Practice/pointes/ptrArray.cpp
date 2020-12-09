/*
 * Statement:
 *
 * Program to understand pointer to array.
 *
 * Author: Prasad Chavan
 *
 * Dec 9, 2020
 *
 */

#include <iostream>

using namespace std;

int main() {

    int a[5], i, *ptr;

    cout << "\nEnter the array elements: ";
    for(i = 0; i < 5; i++) {

        cin >> a[i];
    }

    for(i = 0; i < 5; i++) {

        ptr = &a[i];
        cout << "\nArray elements: " << *ptr << "\tStored at address in memory: " << ptr;
    }

    return 0;
}
