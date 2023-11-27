#include<stdio.h>

int rev(int arr[], int n){ 
    int swap;
    for(int i=0; i<n/2; i++){
        swap = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=swap;
    }
}   

int prar(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

//==================MAIN==========================
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int s = rev(arr, len);
    prar(arr, len);

    return 0;
}



    
