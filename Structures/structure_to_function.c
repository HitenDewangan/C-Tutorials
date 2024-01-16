#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {1664, 9.2, "Hiten"};
    printInfo(s1);

    printf("==========================Inside Main: ================================");
    printf("\nStudent name = %s\n",s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %f\n",s1.cgpa);
}

void printInfo(struct student s1){
    printf("=====================Inside Function====================");
    printf("\nStudent name = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %f\n",s1.cgpa);

    s1.roll = 1779;
}