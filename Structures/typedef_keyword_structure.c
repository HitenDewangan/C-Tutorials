#include<stdio.h>
#include<string.h>

//user defined
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu;

typedef struct computersciencestudent {
    int roll;
    float cgpa;
    char name[100];
} cse;

int main(){
    // struct student s1;  //insted of this
    // stu s2;             //we can write this

    cse s1;
    s1.roll = 1959;
    s1.cgpa = 9.3;
    strcpy(s1.name, "Alan Walker");
    
    printf("==========================Inside Main: ================================");
    printf("\nStudent name = %s\n",s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %f\n",s1.cgpa);
}
