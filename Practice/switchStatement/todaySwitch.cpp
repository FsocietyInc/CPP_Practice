/*
 * Statement:
 * 
 * Program to print user choice of what day is today with switch statement.
 * 
 * Author: Prasad Chavan
 * 
 * Nov 27, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int caseNum;
    
    cout << "Please enter the number represeting what day it is today.";
    cout << "\n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday";
    cout << "\nEnter the choice number for the day: ";
    cin >> caseNum;

    switch ( caseNum )
    {
    case 1:
        cout << "Today is Sunday.";
        break;
    
    case 2:
        cout << "Today is Monday.";
        break;

    case 3:
        cout << "Today is Tuesday.";
        break;
        
    case 4:
        cout << "Today is Wednesday.";
        break;
        
    case 5:
        cout << "Today is Thursday.";
        break;
        
    case 6:
        cout << "Today is Friday.";
        break;

    case 7:
        cout << "Today is Saturday.";
        break;

    default:
        cout << "The choice you entered is invalid, please enter a valid choice.";
        break;
    }

    return 0;
}
