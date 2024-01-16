#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 2571;
    s1.cgpa = 9.2;
    //s1.name = "Hiten";  //incorrect as strings with array notations are not changeable
    strcpy(s1.name,"Hiten");

    printf("======================================\n");
    printf("Student name = %s\n",s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %f\n",s1.cgpa);
}