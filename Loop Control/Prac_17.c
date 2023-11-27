 #include<stdio.h>
int main(){
    int n;
    // printf("Enter no.:");
    // scanf("%d", &n);

    // while(n%2==0){               //using while 
    //     printf("Enter number:");
    //     scanf("%d", &n);
    // }
    // printf("got ODD no.");

    do {
        printf("enter number:");       //using do while
        scanf("%d",&n);
        printf("%d\n", n);

        if(n%2!=0) {
            break;
        }
    }while(1);
    printf("GOT ODD no.");
    return 0;
}