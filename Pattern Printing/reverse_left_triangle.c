#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("\n");
    for(int i=0; i<n;i++){
        for(int j=i+1; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}