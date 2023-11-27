#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countLength(char arr[]);

//concatenation

int main(){
    char firstStr[100] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr,secStr);
    puts(firstStr);
}