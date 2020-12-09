/*
 * Statement:
 *
 * Program to get familiar with struct nesting.
 *
 * Author: Prasad Chavan
 *
 * Dec 7, 2020
 *
 */

#include <iostream>

using namespace std;

struct Student {

    int roll;
    char name[20];
    
    struct Person {
        
        int pid;
        char name[20];
        
        struct Employee {
            
            int id, salary;
            char name[20];
        }e;
        
    }p;
    
}s;

int main() {

    cout << "\nStudent Details: \n";
    cout << "\nEnter name of student: ";
    cin >> s.name;
    cout << "\nEnter Roll No: ";
    cin >> s.roll;

    cout << "\nPerson Details: \n";
    cout << "\nEnter name of person: ";
    cin >> s.p.name;
    cout << "\nEnter person's ID: ";
    cin >> s.p.pid;

    cout << "\nEmployee Details: \n";
    cout << "\nEnter name of Employee: ";
    cin >> s.p.e.name;
    cout << "\nEnter employee ID: ";
    cin >> s.p.e.id;
    cout << "\nEnter Salary: ";
    cin >> s.p.e.salary;

    cout << "\nStudent Details Entered: \n";
    cout << "\nName of student: " << s.name;
    cout << "\nRoll No: " << s.roll;

    cout << "\nPerson Details Entered: \n";
    cout << "\nName of person: " << s.p.name;
    cout << "\nPerson's ID: " << s.p.pid;

    cout << "\nEmployee Details Entered: \n";
    cout << "\nName of Employee: " << s.p.e.name;
    cout << "\nEmployee ID: " << s.p.e.id;
    cout << "\nSalary: " << s.p.e.salary;

    return 0;
}
        