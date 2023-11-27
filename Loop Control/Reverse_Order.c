 #include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    int fct=1;              //to use long memory what to do
    for(int j=10; j>=1; j--){
        printf("%d\n", n*j);
    }
    
    return 0;
}