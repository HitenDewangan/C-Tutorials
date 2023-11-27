 #include<stdio.h>
int main(){
    int sum=0;              //toprint sum of 5 to 5o
    for(int i=5,j=50; i<=j; i++){
        sum+=i;
    }
    
    printf("Sum of given series is:%d",sum);
    return 0;
}