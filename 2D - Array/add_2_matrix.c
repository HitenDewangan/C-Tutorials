#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);

    //first matrix
    printf("\n----------------------------For first matrix-------------------\n");
    int a[r][c];
    for(int i=0; i<r;i++){
        printf("Enter elements for %d row: ",i+1);
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //second matrix
    printf("------------------------------For second matrix---------------------\n");
    int b[r][c];
    for(int i=0; i<r;i++){
        printf("Enter elements for %d row: ",i+1);
        for(int j=0; j<c; j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }


    for(int i=0; i<r;i++){
        for(int j=0; j<c; j++){
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }


    return 0;
}