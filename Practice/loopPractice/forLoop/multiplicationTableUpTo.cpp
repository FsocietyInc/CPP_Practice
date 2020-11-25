/*  
    Statement:
    
    Program to print multipication table upto given number.
    
    Author: Prasad Chavan
    Nov 24, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int number, i, j;

    cout << "Enter number to get table upto: ";
    cin >> number;

    cout << "Table of 1-" << number << "\n\n";
    
    for (i = 1; i <= number; i++){
        cout << "Table of " << i << ":\n" << "\n";
        for ( j = 1; j <= 10; j++ ){
            cout << i * j << "\t";
        }
        cout << "\n\n";
    }

    return 0;
}