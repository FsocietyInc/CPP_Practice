/*
 * Statement:
 *
 * Program to understand the working of functions in CPP.
 *
 * Author: Prasad Chavan
 *
 * Dec 2, 2020
 *
 */

#include <iostream>

using namespace std;

// Funtion declaration
void fun1(){
        
        cout<<"\nI am in Function1";
    }

void fun2(){
        
        cout<<"\nI am in Function2";
    }
int main(){

    cout<<"I am in Main Function";
    
    // Function Call
    
    fun1();
    fun2();
    
    return 0;
}
