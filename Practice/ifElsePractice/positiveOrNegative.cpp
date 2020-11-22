/*  
    Statement:
    
    Program to check greater than zero or if it is positive.
    
    Author: Prasad Chavan
    Nov 21, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "Enter an interger value: ";
    cin >> number;

    if ( number > 0){
        cout << "\n\n" << number << " is GREATER than Zero and is POSITIVE." << endl;
    }

    else
    {
        cout << "\n\n" << number << " is LESS than Zero and is NEGATIVE." << endl;
    }
    
    return 0;

}