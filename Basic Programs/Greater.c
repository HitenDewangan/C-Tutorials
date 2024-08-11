#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main()
{
	int x=31,y=21;
	int c,d;
	c=((x+y)+abs(x-y))/2;
    d=((x+y)-abs(x-y))/2;
	printf("greatest is:%d\n",c);
    printf("smallest is:%d",d);

}
//greatest is:31
//smallest is:20