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

typedef struct complex{
    int real;
    int img;
}cmplx;

typedef struct BankAccount{
    int accountNo;
    char name[100];
} acc;

int main(){
    acc acc1 = {123,"Hided"};
    acc acc2 = {143, "World"};
    acc acc3 = {197,"$$$"};

    printf("account no. = %d\n",acc1.accountNo);
    printf("name = %s\n", acc1.name);
    printf("account no. = %d\n",acc2.accountNo);
    printf("name = %s\n", acc2.name);
    printf("account no. = %d\n",acc3.accountNo);
    printf("name = %s\n", acc3.name);
    // for(int i=1; i<=3; i++){
    //     printf("account no. = %d\n",acc1.accountNo);
    //     printf("name = %s\n", acc1.name);
    // }
    return 0;
    
}

void calcSum(vec v1, vec v2, vec sum){
    sum.x = v1.x +v2.x;
    sum.y = v1.y + v2.y;

    printf("========\nSum of vector is: %di + %dj\n========", sum.x, sum.y);
}