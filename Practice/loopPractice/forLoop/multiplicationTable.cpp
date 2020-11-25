/*  
    Statement:
    
    Program to print multipication table of given number.
    
    Author: Prasad Chavan
    Nov 24, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int number, i;

    cout << "Enter number to get table of: ";
    cin >> number;

    cout << "Table of " << number << endl;
    
    for (i = 1; i <= 10; i++){
        cout << i * number << endl;
    }

    return 0;
}