/*
 * Statement:
 * 
 * Program to find prime number in while.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 27, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "Enter number to check: ";
    cin >> number;

    int i = 2;
    
    while ( i < number/2 ){
        if ( number % i == 0){
            cout << "\nEntered number is Not Prime Number.";
            break;
        }

        else {
            cout << "\nThe entered number is a Prime Number.";
            break;
        }

         i++;
    }

    return 0;    

}