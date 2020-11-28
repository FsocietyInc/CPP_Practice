/*
 * Statement:
 * 
 * Program to print a pattern (pyramid) of * with do while loop.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 27, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int rows, i = 1, j;

    cout << "Enter number of rows to print with * pattern: ";
    cin >> rows;

    if ( rows != 0){

        do {
            
            j = 0;
            do {

                j++;
                cout << "*";
            } while ( j < i);
            
            i++;
            cout << endl;
        } while ( i <= rows );

        do {
            j = 0;
            do{
                cout << "*";
                j++;
            } while ( j < i);
            i--;
            cout << "\n";
        } while ( i >= 1);
    }

    else {
        cout << "Dude we can't print pattern if there's no rows.";
    }
    

    return 0;
}