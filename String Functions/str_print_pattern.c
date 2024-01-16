#include<stdio.h>
#include<string.h>

void pattern(char str[]);

void main(){
    char str[100];
    printf("Enter the string: ");
    gets(str);
    pattern(str);
}

void pattern(char str[]){
    int s = strlen(str);
    int counta = 0;
    int countb = 0;

    int i=0;
    for(i=0; i<=s; i++){
        if(str[i]==str[0]){
            counta++;
        }
        else{
            break;
        }
    }

    for(i; i<=s; i++){
        if(str[i+1]==str[0]){
            countb++;
        }
    }

    if(counta == countb){
        puts(str);
    }
    else{
        printf("Error !!!");
    }
}