#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countLength(char arr[]);
void salting(char password[]);
void slice(char str[], int n, int m);

int main(){
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}

void salting(char password[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass,password);  //newPass = "test"
    strcat(newPass,salt);   //newPass = "test" + "123"
    puts(newPass);
}

