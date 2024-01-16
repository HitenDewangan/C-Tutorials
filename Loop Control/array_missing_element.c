#include<stdio.h>
#include<stdbool.h>

void missing(int a[],int x, int start, int end);

int main(){
    int n;

    //taking range
    int start, end;
    printf("Enter start and end position:");
    scanf("%d%d",&start,&end);

    //calculating sum of range
    n = (end - start);
    int expected_sum = ((n+1)*(start+end))/2;           //int sum = (n*(n+1))/2;  // for sum of n natural numbers, when start = 1
  
    //storing the all the elements of range in array
    int a[n];
    for(int i=start, j=0; i<=end && j<n; i++){
        a[j] = i;
    }

    // calculating sum of the elements of array
    int actual_sum = 0;
    for(int i=0; i<n; i++){
        actual_sum += a[i];
    }
    
    int miss = expected_sum - actual_sum;

    printf("expected sum : %d\nactual sum : %d\n", expected_sum,actual_sum);

    if(miss == 0)
        printf("No missing element");
    else
        printf("Missing element is: %d", miss);
}

// void missing(int a[],int x, int start, int end){
//     bool flag=1;
//     for(int i=start, j=0; i<=end, j<x; i++){
//         if(a[j] >= start && a[j] <= end){
//             continue;
//         }
//         else{
//             flag = 0;
//             printf("%d",a[i]);
//             break;
//         }
//     }
//     if(flag == 1){
//         printf("NO element is missing !");
//     }

// }