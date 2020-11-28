/*
 * Statement:
 * 
 * Program to get intro to arrays in cpp.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 28, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int arr[5];
    int i;

    cout << "\nEnter 5 elements of the array of type integer: ";
    
    for ( i = 0; i < 4; i++){
        cin >> arr[i];
    }
    
    cout << "Element of array by order:\n";
    
    for ( i = 0; i < 5; i++ ){

        cout << "arr[" << i << "] : " << arr[i] << endl;

    }

    return 0;
}
