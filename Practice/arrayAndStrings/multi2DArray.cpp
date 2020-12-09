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

    int arrOne[10][10], arrTwo[10][10], answer[10][10];
    int i, j, k, rows, columns;

    cout << "Enter the number of rows for matrix: ";
    cin >> rows;

    cout << "Enter the number of colums for matrix: ";
    cin >> columns;

    cout << "Enter elements of First Matrix: ";
    for (i = 0; i < rows; i++){

        for (j = 0; j < columns; j++){

            cin >> arrOne[i][j];
        }
    }

    cout << "Enter elements of Second Matrix: ";
    for (i = 0; i < rows; i++){

        for (j = 0; j < columns; j++){

            cin >> arrTwo[i][j];
        }
    }

    for (i = 0; i < rows; i++){

        for (j = 0; j < columns; j++){

            answer[i][j] = 0;
            for (k = 0; k < columns; k++){

                answer[i][j] = answer[i][j] + arrOne[i][k] * arrTwo[k][j];
            }
        }   
    }

    cout << "\nMultiplication of 2D matrices: \n";
    for (i = 0; i < rows; i++){

        for (j = 0; j < columns; j++){

            cout << answer[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}