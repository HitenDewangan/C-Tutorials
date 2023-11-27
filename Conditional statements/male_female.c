#include<stdio.h>
int main(){
    char a;
    printf("Enter your sex(M/F/T):");
    scanf("%c",&a);

    if(a=='M')
    printf("You are MARD");

    else if(a=='F')
    printf("You are Aurat");

    else if(a=='T')
    printf("Chhakka");

    else
    printf("YOU ARE DOG");

    return 0;

}