/*  
    Statement:
    
    Program to print numbers descending order with loops.
    
    Author: Prasad Chavan
    Nov 24, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int i = 10;

    cout << "Numbers from 10-1 in descending order" << endl;


    cout << "With For Loop\n" << endl;
    for ( i = 10; i >= 1; i -= 1){
        cout << i << "\t";
    }

    cout << "\n\nWith While Loop\n" << endl;
    i = 10;
    while ( i >= 1){
        cout << i << "\t";
        i -= 1;
    }

    cout << "\n\nWith Do While Loop\n" << endl;
    i =10;
    do {
        cout << i << "\t";
        i -= 1;
    } while ( i >= 1);

    return 0;
}