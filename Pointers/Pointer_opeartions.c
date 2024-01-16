#include<stdio.h>
#include<string.h>
#include<ctype.h>
//---------------------------------------------------------------------
// int main(){
//     int a[] = {1,2,3,4};
//     char b[] = {'q','u','i','z'};
//     int *p, *q;
//     p=a;
//     q=&a;
//     int _age = *p;
//     printf("%d\n",*(p+2));
//     printf("%d\n",*(q+3));
//     printf("%d",_age);
// }
//-------------------------------------------------------------------------
// int main(){
//     int a[] = {1,2,3,4};
//     char b[] = {'q','u','i','z'};
//     int *p; char *q;
//     p=a;
//     q=&b;
//     int _age = *p;
//     printf("%d\n",*(p+2));
//     printf("%c\n",*(q+3));
//     //printf("%d",_age);
// }
//---------------------------------------------------------------------
int main(){
    char a[] = "quiz";

    int *p;
    int len = strlen(a);

    p = &len;

    printf("%c\n",upper(a[*p-1]));

}
//----------------------------------------------------------------------
// const int MAX = 3;
// int main(){
//     int var[] = {10, 100, 200};
//     int i, *ptr[MAX];      //*ptr[3]
//     int **ptr1 = &ptr[i];

//     printf("%d\n",&ptr1);

//     for(i = 0; i< MAX; i++){
//         ptr[i] = &var[i]; // assign the address of integer. 
//     }

//     for(i = 0; i< MAX; i++){
//         printf("Value of var[%d] : %d\n",i, &ptr[i]);
//     }
// }
//-------------------------------------------------------------------------
// int main(){
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     int var[n];

//     int i, *ptr[n];
//     printf("Enter the elements of array: \n");
//     for(i = 0; i<n; i++){
//         scanf("%d",&var[i]);
//         ptr[i] = &var[i]; 
//     }

//     for(i = 0; i<n; i++){
//         printf("Value of var[%d] : %d\n",i, &ptr[i]);
//     }
//     return 0;
// }