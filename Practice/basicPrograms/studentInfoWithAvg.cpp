/*  Program to get info of students and calculating
    average of n subjects

    Author: Prasad Chavan
    Nov 20, 2020

*/

#include <iostream>

using namespace std;


int main(){

    char nameOfStudent[20];
    int rollNo, n, markOfSub[5], total, i;

    cout << "Enter the name of student (Last Name_First Name): ";
    cin >> nameOfStudent;
    cout << "Enter the roll no. of student: ";
    cin >> rollNo;
    cout << "Enter the number of subjects: ";
    cin >> n;

    cout << "Enter the marks for subjects (Separated by Spaces): ";
    
    for ( i = 0; i < 5; i++){
        cin >> markOfSub[i];
        total += markOfSub[i];
    }
    cout << "\nName: " << nameOfStudent;
    cout << "\nRoll NO: " << rollNo;
    cout << "\nAverage = " << total/n;

    return 0;
}