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

void change(int data);

int main() {

    int data = 3;

    cout << "\nBefore function call value of the data is: " << data << endl;

    change(data);
    cout << "\nAfter function call value of the data is: " << data << endl;

    return 0;
}
void change(int data) {

    data = 5;
    cout << "\nValue of the data is: " << data << endl;
}
