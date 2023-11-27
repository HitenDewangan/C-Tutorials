#include<stdio.h>
#include<string.h>
//#include "vowels_in_string.h"

// void printstring(char arr[]);
// int countLength(char arr[]);
// void salting(char password[]);
// void slice(char str[], int n, int m);
// int vowels(char str[]);
void checkChar(char str[], char ch);

int main(){
    char str[100];
    char ch;
    printf("String: ");
    fgets(str, 100, stdin);
    printf("character: ");
    scanf("%c",&ch);

    checkChar(str, ch);
}

void checkChar(char str[], char ch) {
    for(int i = 0; str[i] !='\0'; i++) {
        if(str[i] == ch) {
            printf("character is present");
            return;
        }
    }
    printf("character is NOT present :(");
}
    
