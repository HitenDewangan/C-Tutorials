#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
}s[3];

int main(){
    printf("Enter the students info :\n");
    for(int i=0; i<3; i++){
        printf("Enter the students[%d] info :\n", i+1);
        scanf("%d\n",&s[i].roll);
        scanf("%f\n",&s[i].cgpa);
        scanf("%s",&s[i].name);
    }

    for(int i=0; i<3; i++){
        printf("Student[%d] info :\n", i+1);
        printf("student rollno : %d\t",s[i].roll);
        printf("student cgpa : %.2f\t",s[i].cgpa);
        printf("student name : %s\n\n",s[i].name);
    }
}