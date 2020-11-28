/*
 * Statement:
 * 
 * Program to check voter eligibility with goto statement.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 29, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    
    int age;

    ineligible:
    cout << "\n\nEnter the current age of voter: ";
    cin >> age;

    if ( age < 18){
        cout << "\n\nYou are not eligible for voting.";
        goto ineligible;
    }
        
    else
        cout << "\n\nYou are eligible for voting.";

    return 0;
}
