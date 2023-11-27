#include<stdio.h>

int odd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if((arr[i]%2) != 0){
            count++;
            printf("%d\t",arr[i]);
        }
    }
        
    printf("\nTotal odd no. : %d",count);
}
    

int main(){
    int arr[] = {2,3,56,7,79,5,9,91,77,34,22,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    int s = odd(arr, len);

    return 0;
}



    
