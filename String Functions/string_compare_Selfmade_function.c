//---------------------------- STRCMP() -------------------------------------
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
	char a[100];
    printf("Enter first string: ");
    gets(a);
    char b[100];
    printf("Enter second string: ");
    gets(b);

    int flag;
	for(int i=0; a[i] !='\0' && b[i] != '\0'; i++){
        if(a[i]==b[i]){
            flag=0;
        }
        else if(a[i]<b[i]){
            flag = -1;
        }
        else{
            flag = 1;
        }

    // Check if one string is longer than the other
    if (a[i] == '\0' && b[i] != '\0') {
        flag = -1;                                    // str1 is less than str2 (shorter)
    }else if (a[i] != '\0' && b[i] == '\0') {
        flag = 1;                                    // str1 is greater than str2 (longer)
    }else {
        flag = 0; // Strings are equal
    }
}
    printf("%d",flag);
}

//Wrong code : need correction