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
		if(a[i]==32){                          // we can write (a[i]==' ') also
			count++;
        }
	}
	printf("Number of spaces is: %d",count);
}
//this program is successful