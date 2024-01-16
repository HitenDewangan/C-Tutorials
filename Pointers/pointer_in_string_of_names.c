#include<stdio.h>
#include<string.h>

const int MAX = 4;
int main(){
    
    char *names[] = {
                    "Hina Ali",
                    "Aman Ali",
                    "Hatim"
                            };
    
    int  i;
    int len = strlen(*names);
    printf("len is: %d\n", len);

    for(i = 0; i< MAX-1; i++){
        printf("Value of var[%d] : %s\n",i, names[i]);
    }
}