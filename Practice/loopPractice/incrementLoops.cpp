/*  
    Statement:
    
    Program to print numbers ascending order with loops.
    
    Author: Prasad Chavan
    Nov 24, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int i = 1;

    cout << "Numbers from 1-10 in ascending order" << endl;


    cout << "With For Loop\n" << endl;
    for ( i = 1; i <= 10; i += 1){
        cout << i << "\t";
    }

    cout << "\n\nWith While Loop\n" << endl;
    i = 1;
    while ( i <= 10){
        cout << i << "\t";
        i += 1;
    }

    cout << "\n\nWith Do While Loop\n" << endl;
    i =1;
    do {
        cout << i << "\t";
        i += 1;
    } while ( i <= 10);

    return 0;
}