#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int singers[101] = {1,2,3,4}; // Assuming singers are integers from 1 to 100
    for (int i = 0; i < n; i++) {
        int singer;
        scanf("%d", &singer);
        singers[singer]++;
        break;
    //     printf("Size of singers is: %d", singers[i]);
     }
    printf("%d",singers[3]);

    

    // int maxCount = 0;
    // for (int i = 1; i <= 100; i++) {
    //     if (singers[i] > maxCount) {
    //         maxCount = singers[i];
    //     }
    // }

    // int numFavoriteSingers = 0;
    // for (int i = 1; i <= 100; i++) {
    //     if (singers[i] == maxCount) {
    //         numFavoriteSingers++;
    //     }
    // }

    // printf("%d\n", numFavoriteSingers);

    return 0;
}
