#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countLength(char arr[]);

int main(){
    char oldStr[] = "OldStr";
    char newStr[] = "newStr";
    strcpy(newStr,oldStr);
    puts(newStr);

    char x[5]="hiten";
	char y[100] = "kaltaana";
	
	strcpy(y,x);
	printf("\n%s",y);
  //puts(y);
	
	printf("\nlen of y: %d", strlen(y));
}
