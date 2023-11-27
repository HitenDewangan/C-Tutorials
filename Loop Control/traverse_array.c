#include <stdio.h>    
     
int main()    
{    
    int colo[5];
    // int *ptr;
    // colo[0]=99;
    // ptr= &colo[0];
    // printf("%d",*ptr);

    //input
    int *ptr;
    ptr= &colo[0];

    for(int i=0; i<5; i++){
        printf("%d index : ",i);
        scanf("%d", (ptr+i));     //ptr+0 = ptr
        printf("%d\n",*(ptr+i));
    }

    //output
    for(int i=0; i<5; i++){
        printf("\n%d index = %d: ",i, *(ptr+i));
    }
    
    return 0;    
}    