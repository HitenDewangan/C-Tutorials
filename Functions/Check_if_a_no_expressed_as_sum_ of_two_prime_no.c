#include<stdio.h>
int prime ();
int main(){
    int a,i,j;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a%2==0){
        for(i=1;i<=a/2;i++){
            for(j=a-1;j>=a/2;j--){
                if((prime(i)&&prime(j))&&(i + j == a)){
                    printf("%d+%d=%d\n",i,j,a);
                }
                
            }
        }
    }
    else if(a%2!=0){
        printf("It has no sum of prime numbers");
        
    }
}
int prime (int n) {
    int i,count=0;
    for(i=1;i<=n;i++) {
        if(n%i==0) {
            count+=1;
        }
    } if(count==2){
       return n;
    }
    else {
        return 0;
    }
    
}