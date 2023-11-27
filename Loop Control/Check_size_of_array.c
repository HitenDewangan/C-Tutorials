#include<stdio.h>

int main(){
    int arr[] = {2,3,56,7,79,5,9,91,77,34,22,11};

    int len = sizeof(arr)/sizeof(arr[0]);   // returns no of ements
    int size = sizeof(arr);
    
    //sizeof() gives the size of array in bytes

    printf("Number of elements in array is: %d",len);
    printf("\nsize of array(bytes): %d",size);

    return 0;
}