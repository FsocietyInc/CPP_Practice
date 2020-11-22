/*  
    Statement:
    
    Program to check if the the year entered is Leap or Not.
    
    Author: Prasad Chavan
    Nov 21, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int year;

    cout << "Enter the Year to be check: ";
    cin >> year;

    if ( year % 4 == 0 ){
        cout << "\n\nYou have entered " << year << ", and it is a Leap year." << endl;
    }

    else
    {
        cout << "\n\nYou have entered year " << year << ", and it is Not a leap year." << endl;
    }
    
    return 0;

}