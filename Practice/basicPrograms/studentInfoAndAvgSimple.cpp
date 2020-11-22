/*  Program to get info of students and calculating
    average of 5 subjects

    Author: Prasad Chavan
    Nov 21, 2020

*/

#include <iostream>

using namespace std;


int main(){

    char nameOfStudent[20];
    int rollNo, markSub1, markSub2, markSub3, markSub4, markSub5, total;

    cout << "\nEnter the name of student (Last Name_First Name): \t";
    cin >> nameOfStudent;
    cout << "\nEnter the roll no. of student: \t" ;
    cin >> rollNo;
    
    cout << "\nEnter the marks for subject 1: ";
    cin >> markSub1;
    cout << "\nEnter the marks for subject 2: ";
    cin >> markSub2;
    cout << "\nEnter the marks for subject 3: ";
    cin >> markSub3;
    cout << "\nEnter the marks for subject 4: ";
    cin >> markSub4;
    cout << "\nEnter the marks for subject 5: ";
    cin >> markSub5;

    total = markSub1 + markSub2 + markSub3 + markSub4 + markSub5;

    cout << "\n\n******** STUDENT INFO ********";
    cout << "\nName: " << nameOfStudent;
    cout << "\nRoll NO: " << rollNo;
    cout << "\nAverage = " << total/5;

    return 0;

}