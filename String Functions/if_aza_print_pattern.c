#include<stdio.h>
#include<string.h>
void main()
{ int k;
	char a[100];
	printf("enter string of n length\n");
	gets(a);
	int n=strlen(a);
	
	for(int i=0;i<n;i++)
{
		if(a[i]=='z')
		{
		k=i;
		break;
		}
	}
	
	int index1=k-1;
	int index2=k+1;
		

	for(index1,index2;index1>=0,index2<=n;index1--,index2++)
		{   if(a[index1]=='a' && a[index1]==a[index2] && n%2!=0)
		printf("yes");
		else
		printf("no");
		break;
		
		}
		}