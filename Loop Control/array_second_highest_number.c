#include<stdio.h>

int sec_high(int a[], int length);

int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int res = sec_high(a,n);
    printf("The second highest number is: %d", res);
    return 0;

}

int sec_high(int a[], int length){
    int max1;
    int max2;

    if(a[0] > a[1]){
        max1 = a[0];
        max2 = a[1];
    }
    else{
        max1 = a[1];
        max2 = a[0];
    }

    for(int i=2; i<length; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] < max1){
            max2 = a[i];
        }
    }

    return max2;
}


