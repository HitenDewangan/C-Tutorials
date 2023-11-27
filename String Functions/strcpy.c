#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countLength(char arr[]);

int main(){
    char oldStr[] = "OldStr";
    char newStr[] = "newStr";
    strcpy(newStr,oldStr);
    puts(newStr);
}