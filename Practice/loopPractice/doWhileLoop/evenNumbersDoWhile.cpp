/*  
    Statement:
    
    Program to print even numbers with do while loop.
    
    Author: Prasad Chavan
    Nov 24, 2020

*/

#include <iostream>

using namespace std;

int main(){

    int i = 2, count = 1;

    cout << "Even numbers in the range of 0 - 20: \n";

    do {
        cout << "\n" << count << ". " << i << endl;
        i += 2;
        count++;
    } while ( i <= 20);

    return 0;
}
