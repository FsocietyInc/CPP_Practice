/*
 * Statement:
 *
 * Program to understand pointer to struct.
 *
 * Author: Prasad Chavan
 *
 * Dec 9, 2020
 *
 */

#include <iostream>

using namespace std;

struct Student {
    
    int rollNo;
    char name[30];
}stud;

int main() {
    
    struct Student *ptrS;

    ptrS = &stud;

    cout << "\nEnter name of student: ";
    cin >> ptrS->name;

    cout << "\nEnter roll number: ";
    cin >> ptrS->rollNo;

    cout << "\nName: " << ptrS->name;
    cout << "\nRoll No: " << ptrS->rollNo;

    return 0;
}
