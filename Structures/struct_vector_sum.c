#include<stdio.h>
#include<string.h>

// //user defined
// typedef struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// } stu;

// typedef struct computersciencestudent {
//     int roll;
//     float cgpa;
//     char name[100];
// } cse;

// typedef struct address {
//     int houseNo;
//     int block;
//     char city[100];
//     char state[100];
// } adrs;

typedef struct vector{
    int x;
    int y;
} vec;

void calcSum(vec v1, vec v2, vec sum);

int main(){
    vec v1 = {4,9};
    vec v2 = {3,11};
    vec sum = {0};
    calcSum(v1, v2, sum);
    return 0;
}

void calcSum(vec v1, vec v2, vec sum){
    sum.x = v1.x +v2.x;
    sum.y = v1.y + v2.y;

    printf("========\nSum of vector is: %di + %dj\n========", sum.x, sum.y);
}