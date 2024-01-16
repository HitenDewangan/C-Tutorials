#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);

    int a[r][c];
    for(int i=0; i<r;i++){
       // printf("Enter elements for %d row: ",i+1);
        for(int j=0; j<c; j++){
            a[i][j] = 10;
        }
        printf("\n");
    }

    for(int i=0; i<r;i++){
        for(int j=0; j<c; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}