#include<stdio.h>
int main()
{
    int i, n, flag=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //0 and 1 are not prime no.
    //change flag to 1 for non-prime number
    if(n==0 || n==1)
        flag=1;

    for (i=2; i<=n/2; ++i){
        printf("%d\n",i);                     //to know the value of i

        //if n is divisible by i, then n is not prime
        //change flag to 1 for non-prime
        if(n%i==0){
            flag=1;
            break;
        }
    }
        if(flag==0)
            printf("%d is a prime number.",n);
        else
            printf("%d is not a prime number.",n);
        return 0;

 }
