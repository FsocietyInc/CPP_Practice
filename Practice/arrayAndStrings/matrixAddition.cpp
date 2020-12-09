/*
 * Statement:
 *
 * Program to perform addition of two dimensional matrix.
 *
 * Author: Prasad Chavan
 *
 * Nov 30, 2020
 *
 */

 #include <iostream>

 using namespace std;

 int main(){

    int mOne[2][2], mTwo[2][2], mAns[2][2];
    int i, j;

    // Get input for matrix one.

    cout << "Enter input for first two dimensional matrix: ";

    for (i = 0; i < 2; i++){

        for (j = 0; j < 2; j++){

            cin >> mOne[i][j];
        }
    }

    // Print Matrix One
    cout << "Matrix One: \n";

    for (i = 0; i < 2; i++){

        for (j = 0; j < 2; j++){

            cout << mOne[i][j] << "\t";
            
        }
        cout << "\n";
    }

    // Get input for matrix two.

    cout << "\n\nEnter input for first two dimensional matrix: ";

    for (i = 0; i < 2; i++){

        for (j = 0; j < 2; j++){

            cin >> mTwo[i][j];
        }
        cout << "\n";
    }

    // Print Matrix Two.

    cout << "Matrix Two: \n";

    for (i = 0; i < 2; i++){

        for (j = 0; j < 2; j++){

            cout << mTwo[i][j] << "\t";
            
        }
        cout << "\n";
    }

    // Add two matrices.

    for (i = 0; i < 2; i++){

        for (j = 0; j < 2; j++){

            mAns[i][j] = mOne[i][j] + mTwo[i][j];
            
        }
    }
    // Print Answer.

    cout << "\n\nMatrix Addition: \n\n";

    for (i = 0; i < 2; i++){

        for (j = 0; j < 2; j++){

            cout << mAns[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;

 }