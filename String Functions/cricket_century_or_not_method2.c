#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
  int i,j,k=0,l=0,m,n,count=0;
  char a[100],b[100],c[100];
  printf("enter string 1:\n");
  gets(a);
  // printf("the string is:\n");
  // puts(a);
  for(i=0;a[i]!='\0';i++){
    if(a[i]>=48&&a[i]<=57){
      b[k]=a[i];
      k++;
    }
  }
  for(j=0;a[j]!=32;j++)
    {
      c[l]=a[j];
      l++;
    }
  if((b[0]>=49)&&strlen(b)>=3){
    printf("%s scored a century",c);
  }
  else{
    printf("%s did not score a century and is a bad player",c);
  }
}