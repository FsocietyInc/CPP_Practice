/*
 * Statement:
 * 
 * Program to find and print smallest number of total elements.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 29, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int smallest, i;
    int arrA[5];

    cout << "Enter the 5 elements of array: ";
    
    for ( i = 0; i < 5; i++ ){

        cin >> arrA[i];
    }

    smallest = arrA[0];

    for ( i = 0; i < 5; i+=1){

        if( arrA[i] < smallest ){
            smallest = arrA[i];
        }
    }

    cout << "\n" << smallest << " is the smallest number among the entered elements data.";

    return 0;
}