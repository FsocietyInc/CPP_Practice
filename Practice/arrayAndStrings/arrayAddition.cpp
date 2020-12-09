/*
 * Statement:
 *
 * Program to add two one dimensional arrays.
 *
 * Author: Prasad Chavan
 *
 * Nov 30, 2020
 *
 */

 #include <iostream>

 using namespace std;

 int main(){

    int arrOne[5], arrTwo[5], arrFinal[5];
    int i;

    for (i = 0; i < 5; i++){

        cout << "\nEnter element "<< i << " for array one: ";
        cin >> arrOne[i];

        cout << "\nEnter element " << i << " for array two: ";  
        cin >> arrTwo[i];
    }

    cout << "\nAddition of the two arrays is: \n\n";

    for (i = 0; i < 5; i++){

        arrFinal[i] = arrOne[i] + arrTwo[i];
        cout << arrOne[i] << " + " << arrTwo[i] << " = " << arrFinal[i] << "\n";
    }

    return 0;

 }
