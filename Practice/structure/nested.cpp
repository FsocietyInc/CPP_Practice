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
        
    int rollno;
    char name[20];
    struct Person {
        
        char name[20];
        int pid;
        struct Employee {
            
            int id;
            char name[20];
            float salary;
        }e;
    }p;
}s;

int main() {

    cout << "\nEnter Student Details: ";
    cout << "\nEnter Roll No: ";
    cin >> s.rollno;
    cout << "\nEnter Name: ";
    cin >> s.name;

    cout << "\nEnter Person Details: ";
    cout << "\nEnter Person Name: ";
    cin >> s.p.name;
    cout << "\nEnter Person Id: ";
    cin >> s.p.pid;

    cout << "\nEnter Employee Details: ";
    cout << "\nEnter Employee Name: ";
    cin >> s.p.e.name;
    cout << "\nEnter Employee Id: ";
    cin >> s.p.e.id;
    cout << "\nEnter Employee Salary: ";
    cin >> s.p.e.salary;


    cout << "\nStudent Details: ";
    cout << "\nStudent Roll No: " << s.rollno;
    cout << "\nStudent Name: " << s.name;

    cout << "\n\nPerson Details: ";
    cout << "\nPerson Name: " << s.p.name;
    cout << "\nPerson Id: " << s.p.pid;

    cout << "\n\nEmployee Details: ";
    cout << "\nEmployee Name: " << s.p.e.name;
    cout << "\nEmployee Id: " << s.p.e.id;
    cout << "\nEmployee Salary: " << s.p.e.salary;

    return 0;
}
