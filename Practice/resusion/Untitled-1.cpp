#include<iostream>

using namespace std;

struct Student
    {
        int rollno;
        char name[20];
    }s1;

int main()
{
    cout<<"Enter Name=";
    cin>>s1.name;
    cout<<"\nEnter Roll No=";
    cin>>s1.rollno;
    cout<<"\nName="<<s1.name;
    cout<<"\nRoll No="<<s1.rollno;
    return 0;
}