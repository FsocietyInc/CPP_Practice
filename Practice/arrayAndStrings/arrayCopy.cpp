/*
 * Statement:
 * 
 * Program to copy elements of on array into another.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 28, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int arrOne[5], arrTwo[5];
    int i;

    cout << "Enter 5 elements of array One: ";

    for ( i = 0; i < 5; i++){

        cin >> arrOne[i];
    }

    cout << "After copying the elements of array one into Two:\n\n";

    for ( i = 0; i < 5; i++ ){

        arrTwo[i] = arrOne[i];
        cout << "arrOne[" << i << "] : " << arrOne[i] << "\tarrTwo[" << i << "] : " << arrTwo[i] << endl;
    }

    return 0;
}