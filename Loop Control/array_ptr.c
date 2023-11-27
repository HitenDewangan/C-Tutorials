#include<stdio.h>

int main(){
    int age = 22;
    char _age = 'a';
    int *ptr = &age;
    char *_ptr = &_age;

    printf("%u\n%u\ndiffrrence =%u\n",ptr,_ptr,ptr-_ptr);
    //output will be 1 coz difference is of 1 integer(4byte)
    _ptr = &age;
    printf("comparison = %u\n",ptr==_ptr);


    return 0;
}