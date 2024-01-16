//---------------------------- STRLEN() -------------------------------------
#include<stdio.h>
#include<string.h>
void main(){
	char a[100];
    printf("Enter the string: ");
    gets(a);
    char name[50];
    int len_str = strlen(a);
	int count = 0;
    int i,j;

	for(i=0; a[i] != '\0'; i++){  //for storing name of player
		if(a[i]==' '){
			break;
        }
        else{
            name[i]=a[i];
        }
	}
    name[i]='\0';

    char c[100];
    int score=100;

    for(i=0, j=0; a[i] != '\0'; i--,j++){           //for getting score
        if(a[i]>=48 && a[i]<=57){
            c[j]=a[i];
            printf(a[i]);
        }
        else{
            break;
        }
    }

    //char flag[] = 'century';
    printf("%s\n",c);
    puts(c);
    int len_score = strlen(c); 
    printf("%d\n",len_score);
    for(i=0; i<3; i++){
        if(len_score >= 3){
            printf("%s has scored century",name);
            break;
        }
        else{
            printf("%s has not scored century",name);
            break;
        }
    }
}
// This code is incorrect... TRY SOVING BY YOURSELF... or ... Refer to method 2