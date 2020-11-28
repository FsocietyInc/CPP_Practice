/*
 * Statement:
 * 
 * Program to sort entered data of numbers in their ascendinig order.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 28, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int temp, i, j;
    int arrN[5];

    cout << "Enter the inputs seperated by spaces or each at a new line: ";

    for ( i = 0; i < 5; i++ ){

        cin >> arrN[i];
    }

    cout << "Order of numbers inputs [before]: ";

    for ( i = 0; i < 5; i++ ){

        cout << "\narrN[" << i << "] : " << arrN[i] << "\t";
    }

    for ( i = 0; i < 5; i++){

        for ( j = i+1; j < 5; j++){

            if( arrN[i] > arrN[j]){

                temp = arrN[i];
                arrN[i] = arrN[j];
                arrN[j] = temp;

            }
        }
    }

    cout << "\n\nOrder of numbers inputs [After]: ";
    
    for ( i = 0; i < 5; i++ ){

        cout << "\narrN[" << i << "] : " << arrN[i] << "\t";
    }

    return 0;
}