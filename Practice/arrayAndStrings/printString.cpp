/*
 * Statement:
 *
 * Program to test various functions of string.
 *
 * Author: Prasad Chavan
 *
 * Dec 1, 2020
 *
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){

    char strOne[25], strTwo[25], strCopy[25];
    char length;

    // Print out entered string.

    cout << "\nEnter Your First Name: ";
    gets(strOne);
    cout << "\nEnter Your Last Name: ";
    gets(strTwo);
    

    cout << "\nFirst Name: " << strOne;
    cout << "\nLast Name: " << strTwo;

    // Lowercase

    strlwr(strOne);
    cout << "\nLowercase: " << strOne;

    // Uppercase

    strupr(strOne);
    cout << "\nUppercase: " << strOne;

    // Compare

    if (strcmp(strOne, strTwo) == 0){
        cout << "\n\nYour first name and last name is same :(.";
    }

    else
        cout << "\n\nYour first name and last name is not same :).";

    // Copy

    cout << "\nCopied string: " << strcpy(strCopy, strOne);

    // Concatenate

    cout << "\nYour name is " << strcat(strTwo, strOne);

    // Length 

    cout << "\nLenght of your name is: " << strlen(strOne);

    // Reverse

    cout << "\nYour name in reverse is: " << strrev(strOne);

    return 0;
}