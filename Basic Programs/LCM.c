#include<stdio.h>

int lcm(int a, int b){
    int res = 0;
    if(a%b == 0 || b%a == 0){
        res = (a%b == 0) ? a : b;
        printf("%d",res);
    }
    return res;
}
 
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    int max = (a>b) ? a : b;

    if(lcm(a,b)){
        goto here;
    }         //checking if one number is divisible by other
    
    int LCM = 1;
    for(int i=2; i<=max; i++){ //problem is no. is getting smaller but our i is increasing
        if(a%i == 0 || b%i == 0){
            if(a%i == 0) a/=i;
            if(b%i == 0) b/=i;
           
            LCM*=i;
            //  printf("%d\n",i);
            i = 1;  // value updated to 1 and then i++ means i=2 for next loop
             
        }

    }
    printf("LCM is: %d", LCM);

here:
    return 0;
}