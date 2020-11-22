/*  
    Statement:
    
    Program to check if the the number is even or odd.
    
    Author: Prasad Chavan
    Nov 21, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "Enter the number to be tested: ";
    cin >> number;

    if ( number % 2 == 0 ){
        cout << "\n\nYou have entered " << number << ", and it is Even number." << endl;
    }

    else
    {
        cout << "\n\nYou have entered " << number << ", and it is Odd number." << endl;
    }
    
    return 0;

}