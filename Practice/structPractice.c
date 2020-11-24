

#include <stdio.h>

struct stud{
    int marks[6];
    int rollNo;
    char name[30];
} s[3];

int main(){

    int i , j ;

    for ( i = 0; i < 3; i++){
        
        printf("\nEnter the Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("\nEnter the Name: ");
        scanf("%s", &s[i].name);

        printf("\nEnter the marks of 6 subjects: \n");
        
        for ( j = 0; j < 6; j++){
            scanf("%d\t", &s[i].marks[j]);
        }
    }
        
    printf("\n***************** STUDENT INFORMATION *****************");
    printf("\nRollNo\tName\tM1\tM2\tM3\tM4\tM5\tM6\n");

    for ( i = 0; i < 3; i++){
        printf("%d\t%s\t", s[i].rollNo, s[i].name);

        for ( j = 0; j < 6; j++){
            printf("%d\t", s[i].marks[j]);
            
        }
        printf("\n");
    }

    return 0;
}