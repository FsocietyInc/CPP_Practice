/*  
    Statement:
    
    Program to print even numbers with while loop.
    
    Author: Prasad Chavan
    Nov 24, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int i = 2, count = 1;

    cout << "Even numbers in the range of 0 - 20: \n";

    while ( i <= 20){

        cout << "\n" << count << ". " << i << endl;
        i += 2;
        count++;
    }

    return 0;
}
