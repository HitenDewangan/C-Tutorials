#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {1664, 9.2, "Hiten"};
    struct student *p = &s1;

    printf("Student -> name = %s\n",p->name);
    printf("Student -> roll no = %d\n", p->roll);
    printf("Student -> cgpa = %f\n",p->cgpa);
}
