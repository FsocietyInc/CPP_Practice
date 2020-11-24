/*  Program to get info of students and calculating
    percentage of 5 subjects and assigning grade.

    Author: Prasad Chavan
    Nov 23, 2020

*/

#include <iostream>
#include <string>

using namespace std;


int main(){

    char nameOfStudent[20];
    string grade;
    int rollNo, markSub1, markSub2, markSub3, markSub4, markSub5;
    float percentage, total;

    cout << "\nEnter the name of student (Last Name_First Name): ";
    cin >> nameOfStudent;
    cout << "\nEnter the roll no. of student: \t" ;
    cin >> rollNo;
    

    // Take input about marks for respective subjects.

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
    percentage = ( total * 100 )/ 500; // Formulation

    // Determine grade according to percentage achieved.

    if ( percentage >= 75.00 && percentage <= 100.00){
        grade = "Distinction";
    }
    else if (percentage >= 60.00 && percentage < 75.00) {
        grade = "First Class";
    }
    else if (percentage >= 40.00 && percentage < 60.00){
        grade = "Pass";
    }
    else {
        grade = "Fail";
    }
    
    // Show user what he/she has entered as subject marks.

    cout << "\n\nSubject 1: " << markSub1 << endl;
    cout << "Subject 2: " << markSub2 << endl;
    cout << "Subject 3: " << markSub3 << endl;
    cout << "Subject 4: " << markSub4 << endl;
    cout << "Subject 5: " << markSub5 << endl;

    cout << "\n\n******** STUDENT INFO ********";
    cout << "\nName       : " << nameOfStudent;
    cout << "\nRoll NO    : " << rollNo;
    cout << "\nPercentage : " << percentage << "%";
    cout << "\nGrade      : " << grade;

    return 0;

}