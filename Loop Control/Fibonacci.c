#include<stdio.h>

int main(){
    int t1=0, t2=1, i, n;
    printf("Enter the required fibonacci number:");
    scanf("%d",&n);

    int nxt = t1 + t2;
    for (int i=3; i<=n; ++i){
        t1=t2;
        t2=nxt;
        nxt = t1 + t2;
    
    }
    printf("Fibonacci value is: %d", nxt);
    return 0;
    
}
