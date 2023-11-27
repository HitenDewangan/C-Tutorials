#include<stdio.h>
int main(){
    int a;
    printf("Enter an number for day you wanna know:");
    scanf("\n%d",&a);

    if(a==1)
    printf("Sunday.....Enjoy yoor day");

    else if(a==2)
    printf("Monday...Readyfor fight");

    else if(a==3)
    printf("Tuesday...Try HARD");

    else if(a==4)
    printf("Wedensday....Middle of night");

    else if(a==5)
    printf("Thursday....DO pray to god");

    else if(a==6)
    printf("Friday.....you are tough");

    else if(a==7)
    printf("Saturday...Chill");

    else
    printf("This day doesn't exist");

    return 0;

}