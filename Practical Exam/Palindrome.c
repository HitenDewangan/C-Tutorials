#include<stdio.h>
#include<string.h>

int main(){
    printf("==============================================\n");
    char str[100];
    printf("Enter the string: ");
    gets(str);

    int len = strlen(str);

    int flag = 0;
    for(int i=0; i<len; i++){
        if(str[i] == str[len-1-i]){
            flag = 1;
        }
        else{
            flag = 0;
            break;
        }

    }

    if(flag == 1){
        printf("It is a palindrome");
        printf("\n==============================================\n");
    }
    else{
        printf("Not a Palindrome");
        printf("\n==============================================\n");
    }
}