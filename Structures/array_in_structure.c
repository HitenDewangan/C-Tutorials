#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student ece[100];
    ece[0].roll = 1997;
    ece[0].cgpa = 8.9;
    strcpy(ece[0].name,"Sam");

    ece[1].roll = 1997;
    ece[1].cgpa = 8.9;
    strcpy(ece[1].name,"Ayush");



    printf("======================================\n");
    printf("Student name = %s\n",ece[0].name);
    printf("Student roll no = %d\n", ece[0].roll);
    printf("Student cgpa = %f\n",ece[0].cgpa);

    printf("======================================\n");
    printf("Student name = %s\n",ece[1].name);
    printf("Student roll no = %d\n", ece[1].roll);
    printf("Student cgpa = %f\n",ece[1].cgpa);
}