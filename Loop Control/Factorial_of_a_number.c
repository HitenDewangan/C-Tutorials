 #include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    int fct=1;              //to use long memory what to do
    for(int i=1; i<=n; i++){
        fct*=i;
    }

    printf("Fctorial of %d is:%d",n,fct);
    return 0;
}