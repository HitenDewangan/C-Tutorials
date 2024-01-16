#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countLength(char arr[]);

int main(){
    char B = 'B';
    // char firstStr[] = "Apple";
    // char secStr[] = "Banana";
    // char cm1[] = "HHH";
    // char cm2[] = "HHH";
    // printf("%d",strcmp(firstStr,secStr));  // A - B
    // printf("\n%d",strcmp(secStr,firstStr));   // B - A
    // printf("\n%d",strcmp(cm1,cm2));


  char x[5]="hiten";
	char y[100] = "kaltaana";
	
	strcpy(y,x);
	printf("\n%s",y);
  //puts(y);
	
	printf("\nlen of y: %d", strlen(y));
}