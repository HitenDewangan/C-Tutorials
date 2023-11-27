#include<stdio.h>

void stable(int arr[][10], int n, int m, int number);

int main(){
    int tables[2][10];
    stable(tables, 0, 10, 2);
    stable(tables, 1, 10, 3);

// FOR TABLE OF 2
    for(int i=0; i<10; i++){      // 0 to 10
        printf("%d\t", tables[0][i]);
    }

    printf("\n");

//FOR TABLE OF 3
    for(int i=0; i<10; i++){      // 0 to 10
        printf("%d\t", tables[1][i]);
    }
    return 0;
}

    //FUNCTION
    void stable(int arr[][10], int n, int m, int number){
        for(int i=0; i<m; i++){  // 0 TO 1
            arr[n][i] = number * (i+1);  // 2, 4, 6, 8, 10...
        }
    }

