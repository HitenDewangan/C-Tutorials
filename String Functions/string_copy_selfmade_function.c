#include<stdio.h>
#include<string.h>
void main(){
    char a[100], b[100];
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);

    int len = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<len;i++){
        b[i] = a[i]; 
    }
    
    printf("Now second string is: ");
    puts(b);
}
