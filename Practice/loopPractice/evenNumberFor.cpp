/*  
    Statement:
    
    Program to print even numbers with for loop.
    
    Author: Prasad Chavan
    Nov 24, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int i, count = 1;

    cout << "Even numbers in the range of 0 - 20: \n";

    for ( i = 2; i <= 20; i += 2){
        cout << "\n" << count << ". " << i << endl;
        count++;
    }

    return 0;
}