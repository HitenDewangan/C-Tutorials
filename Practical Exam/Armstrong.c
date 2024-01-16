#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int m = n, num = n;

    int count=0, remainder;
    while(n){
        n = n/10;
        count++;
    }

    int d, sum=0;
    for(int i=0; i<count; i++){
            d = m%10;
            int p = 1;
            for(int j=0; j<count; j++){
                p = p*d; 
            }
            sum += p;
            m = m/10;
    }

    if(sum == num){
        printf("It is an ARMSTRONG number.");
    }
    else{
        printf("NOT an Armstrong number.");
    }

}