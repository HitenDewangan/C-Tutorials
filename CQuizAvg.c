#include <stdio.h>
#include<stdlib.h>

int main() {                                     //program for average of 3 students who given C quiz
	int a,b,c;
	float avg;
    
    printf("In a C-QUIZ marks obtained out of 20");
	printf("\nEnter the marks of a:");
	scanf("%d",&a);
 	
 	printf("\nEnter the marks of b:");
	scanf("%d",&b);
	
	printf("\nEnter the marks of c:");
	scanf("%d",&c);
	

	
	if (a==b && b==c && a==c)                  //checks if all are equal
	{
		printf("all scores are equal");         
	}
	
	if (a>20 && b>20 && c>20)
	{
		printf("Marks OUT of RANGE!!!");
	}
	
	if (a<=20 && b<=20 && c<=20)                  
	{
		avg=(a+b+c)/(float)3;
	    printf("\nAverage of marks obtained is:%.2f",avg);
		if (a>b && a>c)
		{
			printf("\nA has got highest marks");
		}
		
		if (b>c && b>a)
		{
			printf("\nB has got highest marks");
		}
	
	 	if (c>a && c>b)
		{
			printf("\nC has got highest marks");
		}
	
		else                                
		{
			printf("\nSOME OR ALL OF THEM HAVE GOT EQUAL MARKS");
		}
	}
	
	else                                      //checks imarks less than 20
	{
		printf("\nMarks out of RANGE!!!");
	}
}
	
	
	
	                           
	