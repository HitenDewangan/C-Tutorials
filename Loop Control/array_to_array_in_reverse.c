#include<stdio.h>
int main(){
    //int len=7,len2=7;
    int a[] = {1,2,3,4,5,6,7};
    int b[7];
    int len=sizeof(a)/sizeof(a[0]);
    //printf("%d\n",len);

    for(int i=0,j=6;i<len;i++,j--){
        b[i] = a[j]; //i=7
    }
    
    int len2=sizeof(b)/sizeof(b[0]);

    for(int i=0; i<len2; i++){
        printf("%d\n", b[i]);
    }
    return 0;
}
