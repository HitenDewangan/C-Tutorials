//---------------------------- STRLEN() -------------------------------------
#include<stdio.h>
void main(){
	char a[100];
    gets(a);
	int count = 0;
	for(int i=0; i<100; i++){
		if(a[i] == '\0'){
			break;
		}
		else{
			count++;
		}
	}
	printf("Lenth of string is: %d",count);
}