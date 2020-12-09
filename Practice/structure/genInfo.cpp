/*
 * Statement:
 *
 * Program to get general info from user using struct.
 *
 * Author: Prasad Chavan
 *
 * Dec 7, 2020
 *
 */

#include <iostream>
#include <stdio.h>

using namespace std;

struct employee {

    int idNum, salary;
    char name[20];
}dataEmp;

int main() {

    cout << "\nEnter employee name: ";
    gets(dataEmp.name);
    cout << "\nEnter id number: ";
    cin >> dataEmp.idNum;
    cout << "\nEnter salary: ";
    cin >> dataEmp.salary;

    cout << "\nDetails of employee with id " << dataEmp.idNum << "is " << endl;

    cout << "\nEmployee name: " << dataEmp.name;
    cout << "\nId number: " << dataEmp.idNum;
    cout << "\nSalary: " << dataEmp.salary;
    
    return 0; 
}
