//program for sum of series 1+2+3+...n using recursive functionb
#include<stdio.h>

//function declaration
int sum_series(int n);


//_________MAIN___________________________
int main(){
	int n, res;
	printf("Enter the value of n for series: ");
	scanf("%d",n);
	res = sum_series(n);
	printf("Sum of series is: %d", res);
	return 0;
}

//______________________________function definition
int sum_series(int n){
	if(n==1){
		return 1;
	}
	int sum = n + sum_series(n-1);
	
	return sum;
	
}

