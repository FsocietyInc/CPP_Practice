
/*
 * Statement:
 *
 * Program to perform multiplication of 2D arrays.
 *
 * Author: Prasad Chavan
 *
 * Dec, 2020
 *
 */

#include <iostream>

using namespace std;

int main(){

    int a[3][2][2],i,j,k;
    cout << "Enter Array Elements: ";
    for (i = 0; i < 3; i++){

        for (j = 0;j<2;j++){
                    
            for (k = 0; k < 2; k++){

                cin >> a[i][j][k];
            }
        }

    }
    
    cout << "3D Array Elements: \n";
    for (i = 0 ; i < 3; i++){
        
        for (j = 0; j < 2; j++){
                    
            for (k = 0;k < 2; k++){
                
                cout << a[i][j][k] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    cout << "3D Transpose Matrix: \n";
    for (i = 0; i < 3; i++){
        
        for (j = 0;j < 2; j++){

            for (k = 0; k < 2; k++){
                
                cout << a[i][k][j] << "\t";
            }
            
            cout << "\n";
        }
            
        cout << "\n";
    }

        return 0;
}
