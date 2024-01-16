// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i=1; i<=n;i++){
//         for(int j=0; j<i; j++){
//             printf("%d",j+1);
//         }
//         printf("\n");
//     }

//     return 0;
// }
//============================REVERSE==========================
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=n; i>0;i--){
        for(int j=1; j<=i; j++){
             printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}