/*
 * Statement:
 *
 * Program to transpose two dimensional arrays.
 *
 * Author: Prasad Chavan
 *
 * Nov 30, 2020
 *
 */

 #include <iostream>

 using namespace std;

 int main(){

    int twoD[2][2];
    int i, j;

    cout << "Enter input for two dimensioinal array: ";

    for (i = 0; i < 2; i++){

        for (j = 0; j < 2; j++){

            cin >> twoD[i][j];
        }
    }

    cout << "\n\nTwo Dimensional Matrix: \n\n";

    for (i = 0; i < 2; i++){

        for (j = 0; j < 2; j++){

            cout << twoD[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n\nTwo Dimensional Transpose Matrix: \n\n";

    for (i = 0; i < 2; i++){

        for (j = 0; j < 2; j++){

            cout << twoD[j][i] << "\t";
        }
        cout << "\n";
    }

    return 0;
 }
