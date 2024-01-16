#include<stdio.h>
int main(){
    char a[100] = "preeti";
    char b[] = " sharma";
    int ct=0;
    int i,j;

    for(i=0; a[i]!='\0'; i++){
        ct++;
    }
    for(j=0; b[j]!='\0'; j++, ++ct){
        a[ct] = b[j];
    }
    a[ct]='\0';
    puts(a);
}