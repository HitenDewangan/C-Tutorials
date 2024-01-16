//--------PRINT VALID ONLY FOR DUPLICATES, NOT FOR MORE THAN 2-----------------------
#include <stdio.h>

int main() {
  int a[12] = {10, 20, 30, 30, 40, 10, 50, 60, 70, 10, 70, 60};
  int st[10];
  int count;

  printf("Your array is: [10,20,30,30,40,10,50,60,70,10,70,60]\n");
  printf("------------- duplicate values are: ----------------\n");

  for (int i = 0; i < 12; i++) {
    int isDuplicate = 0;
    for (int j = i + 1; j < 12; j++) {
      if (a[i] == a[j]) {
        isDuplicate = 1;
        break;
      }
    }

    if (isDuplicate) {
      printf("%d\n", a[i]);
    }
  }

  return 0;
}
//----------------------------------------FOR UNIQUE VALUES, EACH ELEMENT ONCE-------------------------------------------------------
// #include <stdio.h>

// int main() {
//     int a[12] = {10, 20, 30, 30, 40, 10, 50, 60, 70, 10, 70, 60};
//     int size = sizeof(a) / sizeof(a[0]);

//     // visited flag array
//     int visited[size];
//     for (int i = 0; i < size; i++) {
//         visited[i] = 0;
//     }

//     printf("Unique elements: ");
//     for (int i = 0; i < size; i++) {
//         if (!visited[i]) {
//             printf("%d ", a[i]);
//             visited[i] = 1;

//             // Check for duplicates
//             for (int j = i + 1; j < size; j++) {
//                 if (a[i] == a[j]) {
//                     visited[j] = 1;
//                 }
//             }
//         }
//     }
//     printf("\n");

//     return 0;
// }

