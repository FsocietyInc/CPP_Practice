/*  
    Statement:
    
    Program to check if the the person is eligible for voting.
    
    Author: Prasad Chavan
    Nov 21, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int age;

    cout << "Enter the current age of concerned: ";
    cin >> age;

    if ( age >= 18){
        cout << "\n\nRespective person has age " << age << " is eligible for voting." << endl;
    }

    else
    {
         cout << "\n\nRespective person has age " << age << " is minor and not eligible for voting." << endl;
    }
    
    return 0;

}