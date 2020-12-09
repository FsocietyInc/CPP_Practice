/*
 * Statement:
 *
 * Program to size of struct.
 *
 * Author: Prasad Chavan
 *
 * Dec 9, 2020
 *
 */

#include <iostream>

using namespace std;

union simple {
    
    int a;
    float b;
    char c[10];
}size;

int main() {
    
    cout << "\nSize of Structure: " << sizeof(size);
    return 0;
}
