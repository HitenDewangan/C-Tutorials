#include<stdio.h>

void printstring(char arr[]);
void cannotChange();

int main(){
    // char firstname[50];                  //simple input string
    // scanf("%s", firstname);
    // printf("Your name is %s", firstname);
    // return 0;

    // char str[100];                       //using fgets for multi word
    // fgets(str, 100, stdin);
    // puts(str);

    char *canChange = "Hello World";        //string with (*) symbol is pointer & can be changed
    puts(canChange);
    canChange = "Hello Guys";
    puts(canChange);

    char cannotChange[] = "Hello World";        //string without pointer & cannot be changed
    puts(cannotChange);
    cannotChange = "Hello Guys";        //red line indicates that when [] notation is used 
    puts(canChange);                    //then it is treated as string and strings are not changable

    return 0;


}
