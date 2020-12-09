/*
 * Statement:
 *
 * Program to .
 *
 * Author: Prasad Chavan
 *
 * , 2020
 *
 */

#include <iostream>
#include <stdio.h>

using namespace std;

struct subStruct
{
    char sub1, sub2, sub3, studentName[20];
    float M1, M2, M3, total;
}dat[3];



int main() {

    int i = 0;

    for(i = 0; i < 3; i++) {

        cout << "\nEnter name of student: ";
        cin >> dat[i].studentName;
        cout << "\nEnter subject one name and marks: ";
        cin >> dat[i].sub1 >> dat[i].M1;
        cout << "\nEnter subject two name and marks: ";
        cin >> dat[i].sub2 >> dat[i].M2;        
        cout << "\nEnter subject three name and marks: ";
        cin >> dat[i].sub3 >> dat[i].M3; 
        //dat[i].total = dat[i].M1 + dat[i].M2 + dat[i].M3;        
    }
    

    cout << "\n********STUDENT INFORMATION********\n\n";
    cout << "StudentName\tSubject\tMarks\n";

    for(i = 0; i < 3; i++) {

        cout << dat[i].studentName << "\t" << dat[i].sub1 << "\t" << dat[i].M1 << "\n";
        cout << dat[i].studentName << "\t" << dat[i].sub2 << "\t" << dat[i].M2 << "\n";
        cout << dat[i].studentName << "\t" << dat[i].sub3 << "\t" << dat[i].M3 << "\n";
    }
   
    return 0;
}
