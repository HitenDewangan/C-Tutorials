 #include<stdio.h>
int main(){
    int n;
    // for(int i=1; i<=10; i++){    //to printcall no. b/w 1 to 10 except 6
    //     if(i==6){  //skip
    //         continue;
    //     }
    //     printf("%d \n", i);
    // }    


    // for(int i=5; i<=50; i++){   //odd no.b/w 5-50
    //     if(i%2==0){
    //         continue;           //using continue
    //     }
    // printf("%d \n", i);
    // }

    for(int i=5; i<=50; i++){
        if(i%2!=0){
            printf("%d \n", i);
        }
    }
    return 0;
}