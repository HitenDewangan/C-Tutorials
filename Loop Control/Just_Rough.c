#include<stdio.h>

void checkPalindrome(int a[], int x);

int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    checkPalindrome(a,n);

}

void checkPalindrome(int a[], int x){
    int flag=1;
    for(int i=0; i<=x/2; i++){
        if(a[i] == a[x-1-i]){
            a[i] = a[x-1-i];
            continue;
        }
        else{
            flag = 0;
            printf("Not a palindrome");
            break;
        }
    }
    if(flag == 1)
        printf("Reverse is: ");
        for(int i=0; i<x; i++){
            printf("%d ",a[i]);
        }
        printf("\nIt is a palindrome");
}