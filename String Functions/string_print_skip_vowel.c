#include<stdio.h>
#include<string.h>
#include<ctype.h>
char vow[5]="aeiou";        //In C programming there's no concept of membership operator
char VOW[5]="AEIOU";
char a[100];

int i,j;
void main(){
    
    
    printf("Enter a string: ");
    gets(a);
    int l=strlen(a);


    int l1 = strlen(VOW);
    for(i = 0;i<l; i++)
    {      
        for(j=0; j<=l1; j++)
        {

            if((a[i] == vow[j]) || a[i] == VOW[j]){ 
              a[i]=' ';
            }
    	}
	}
	for(i=0; i<=l; i++){
		if(a[i] != 32){
			printf("%c",a[i]);
		}
	}
            
} 
      
        
