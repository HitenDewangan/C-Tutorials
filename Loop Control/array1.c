#include<stdio.h>

int main(){
    // int marks1 = 97;   //declaring individual variables
    // int marks2 = 98;
    // int marks3 = 89;  

    int marks[3];         //creating array
    printf("enter phy: ");
    scanf("%d,",&marks[0]);

    printf("enter chem:");
    scanf("%d",&marks[1]);

    printf("enter maths :");
    scanf("%d",&marks[2]);

    printf("phy = %d, chem = %d, maths = %d", marks[0],marks[1], marks[2] );



    return 0;
}