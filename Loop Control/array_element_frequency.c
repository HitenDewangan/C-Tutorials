#include<stdio.h>
void main(){
    int n=8;
    int arr[]={5,6,1,1,2,3,3,1};

    int count;
    int st[n];
    for(int i=0;i<n;i++){
        count = 1;
        for(int k=0; k<n; k++){
            if(arr[i] == st[k]){
                goto here;
            }
        }

        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        st[i] = arr[i];
        printf("\n%d occurs %d times\n",arr[i], count);



        here: continue;   
    }
}
