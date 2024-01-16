#include<stdio.h>

int main(){
    int age = 22;
    int *p = &age;
    int _age = *p;
    printf("%d\n",&age);
    printf("%d\n",p);
    printf("%d",_age);
}