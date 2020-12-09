/*
 * Statement:
 *
 * Program to perform multiplication of 2D arrays.
 *
 * Author: Prasad Chavan
 *
 * Dec 1, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int column,rows, i, j, k;
    int arrOne[10][10], arrTwo[10][10], arrResult[10][10];

    cout << "\nEnter number of rows and columns for the arrays respectively: ";
    cin >> rows >> column ;

    cout << "\nEnter input for first two dimensional matrix: ";
    for (i = 0; i < rows; i++){

        for (j = 0; j < column; j++){

            cin >> arrOne[i][j];
        }
        
    }

    cout << "\nEnter input for second two dimensional matrix: ";
    for (i = 0; i < rows; i++){

        for (j = 0; j < column; j++){

            cin >> arrTwo[i][j];
        }
    }

    for (i = 0; i < rows; i++){

        for (j = 0; j < column; j++){

            arrResult[i][j] = 0;
            
            for (k = 0; k < column; k++){

                arrResult[i][j] = arrResult[i][j] + arrOne[i][k] * arrTwo[k][j];
            }
        }

    }

    cout << "Multiplication of 2 dimensional matrices: \n";
    for (i = 0; i < rows; i++){

        for (j = 0; j < column; j++){

           cout << arrResult[i][j] << "\t";
        }

        cout << "\n";
    }

    return 0;
}
