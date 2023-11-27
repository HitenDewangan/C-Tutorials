#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countLength(char arr[]);

int main(){
    char name[] = "Hiten";      
    printf("length is: %d", strlen(name));
    return 0;
}

int countLength(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
        count++;
        printf("%c", arr[i]);
    }
    return count-1;
}

void printstring(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}