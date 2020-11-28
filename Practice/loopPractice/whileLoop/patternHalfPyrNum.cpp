/*
 * Statement:
 * 
 * Program to print a pattern (half pyramid) of numbers with while loop.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 27, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int rows, i = 0, j = 0;

    cout << "Enter number of rows to print with * pattern: ";
    cin >> rows;

    if ( rows != 0){

        while ( i <= rows ){

            j = 1;
            while ( j < i){

                cout << j;
                j++;
            }

            cout << endl;
            i++;
        }

        while ( i >= 1){

            j = 1;
            while ( j < i){

                cout << j;
                j++;
            }

            cout << "\n";
            i--;
        }
    }

    else
        cout << "You can't print pattern with 0 rows.";

    return 0;

}