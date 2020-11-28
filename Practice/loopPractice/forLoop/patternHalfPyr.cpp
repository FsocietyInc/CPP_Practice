/*
 * Statement:
 * 
 * Program to print a pattern (pyramid) of * with for loop.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 27, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int rows, i, j;

    cout << "Enter number of rows to print with * pattern: ";
    cin >> rows;

    if ( rows != 0){

        for ( i = 1; i <= rows; i++){
            
            for ( j = 1; j <= i; j++){
                cout << "*";
            }
            cout << "\n";            
        }

        for ( i = rows; i >= 1; i--){

            for ( j = 0; j < i-1; j++){
                cout << "*";
            }
            cout << "\n";
        }
    }

    else {
        cout << "Dude we can't print pattern if there are no rows.";
    }
    
    return 0;
}