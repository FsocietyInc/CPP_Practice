/*
 * Statement:
 * 
 * Program to find and print largest number amongst the entered data.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 28, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int largest = 0, i;
    int arrL[5];

    cout << "Enter the inputs seperated by spaces or each at a new line: ";

    for ( i = 0; i < 5; i++ ){

        cin >> arrL[i];
    }

    for ( i = 0; i < 5; i++){

        if( arrL[i] > largest){

            largest = arrL[i];
        }
    }

    cout << "\n\nLargest number amongst the entered data: " << largest;

    return 0;
}