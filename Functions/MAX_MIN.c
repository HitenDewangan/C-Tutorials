//Progeam which provides maximum & minimum value among 4 int variables
//scanned using function

int max(int a,int b);
int min(int a,int b);

int main(){
	int a,b,c,d, max1, min1;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("\nEnter the value of b: ");
	scanf("%d", &b);
	printf("\nEnter the value of c: ");
	scanf("%d", &c);
	printf("\nEnter the value of d: ");
	scanf("%d", &d);
	
	max1=max(a,max(b, max(c,d)));
	min1=min(a,max(b, max(c,d)));
    printf("MAX is: %d", max1);
    printf("\nMIN is: %d", min1);
	return 0;
}
	
	
int max(int a,int b){
	if(a>b)
		return a;
	else
    	return b;
}

int min(int a,int b){
	if(a<b)
		return a;
	else
        return b;
}
	
