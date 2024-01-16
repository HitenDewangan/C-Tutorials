//---------------------------- STRLEN() -------------------------------------
#include<stdio.h>
#include<string.h>
void main(){
	char a[100];
    printf("Enter the string: ");
    gets(a);
    int len = strlen(a);
	int count = 0;
	for(int i=0; i<=len; i++){
		if(a[i]>=65 && a[i]<=90){
			count++;
        }
	}
	printf("Number of Uppercase characters is: %d",count);
}