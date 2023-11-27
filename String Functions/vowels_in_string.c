#include<stdio.h>
#include<string.h>
//#include "vowels_in_string.h"

void printstring(char arr[]);
int countLength(char arr[]);
void salting(char password[]);
void slice(char str[], int n, int m);
int vowels(char str[]);

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    vowels(str);
}

int vowels(char str[]){
    int count = 0;
    char vow[]="aeiou";        //In C programming there's no concept of membership operator
    char VOW[]="AEIOU";
    for(int i = 0; str[i] != '\0'; i++){
        char ch = str[i];
        if((ch in vow) || (ch in VOW)){ 
            count++;
        }
    }
    printf("There are %d vowels in given str", count);
}
//This program is wrong and we have to check of individual vowels

    
