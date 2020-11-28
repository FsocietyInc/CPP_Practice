/*
 * Statement:
 * 
 * Program to understand the use of break and continue.
 * 
 * Author: Prasad Chavan
 * 
 * , 2020
 *
 */


#include <iostream>

using namespace std;

int main(){

    int i;

    for ( i = 1; i <= 10; i++){

        if ( i == 8 ){
            continue;
        }

        cout << i << "\n";
    }
    return 0;
}