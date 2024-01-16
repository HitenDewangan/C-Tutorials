#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    char a[100], b[100];
    printf("Enter a string: ");
    gets(a);
    int i, c;

    for(i=0; a[i] != '\0'; i++){
        if(a[i]>='a' && a[i]<='e'){
            printf("%c",a[i]);
            c++;
        }
    }
    if(c==0){
        printf("NOT in Range !!!");
    }
}