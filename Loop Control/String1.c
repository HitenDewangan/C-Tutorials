#include<stdio.h>

void printstring(char arr[]);

int main(){

   // char name[] = {'H', 'I', 'T', 'E', 'N'};
   // char name[] =  "HITEN"; 

    char firstName[] = "Hiten";
    char lastName[] = "Dewangan";

    printstring(firstName);
    printstring(lastName);
    return 0;
} 

void printstring(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}