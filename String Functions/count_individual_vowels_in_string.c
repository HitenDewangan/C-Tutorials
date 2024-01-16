//======================================= using for() ============================================================
#include<stdio.h>
#include<string.h>
//#include "vowels_in_string.h"

// void printstring(char arr[]);
// int countLength(char arr[]);
// void salting(char password[]);
// void slice(char str[], int n, int m);
void vowels(char str[]);

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    vowels(str);
}

void vowels(char str[]){
    int a = 0, e = 0, I = 0, o = 0, u = 0;
    for(int i = 0; str[i] != '\0'; i++){
            (str[i] == 'a' || str[i] == 'A') ? ++a :
                ((str[i] == 'e' || str[i] == 'E') ? ++e :
                    ((str[i] == 'i' || str[i] == 'I') ? ++I :
                        ((str[i] == 'o' || str[i] == 'O') ? ++o :
                            ((str[i] == 'u' || str[i] == 'U') ? ++u : 0))));
                            //printf("%d %d %d %d %d\n",a,e,i,o,u);
        }
    
    printf("\nNumber of vowels in given string is: \n");
     printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d", a, e, I, o, u);
} 
//=================================================== using switch() =========================================================================
// #include <stdio.h>
// #include <string.h>

// // void printstring(char arr[]);
// // int countLength(char arr[]);
// // void salting(char password[]);
// // void slice(char str[], int n, int m);

// void vowels(char str[]) {
//   int a = 0, e = 0, i = 0, o = 0, u = 0;
//   for (int j = 0; str[j] != '\0'; ++j) {
//     switch (str[j]) {
//       case 'a':
//       case 'A':
//         ++a;
//         break;
//       case 'e':
//       case 'E':
//         ++e;
//         break;
//       case 'i':
//       case 'I':
//         ++i;
//         break;
//       case 'o':
//       case 'O':
//         ++o;
//         break;
//       case 'u':
//       case 'U':
//         ++u;
//         break;
//       // No action for non-vowel characters
//       default:
//         break;
//     }
//   }

//   printf("\nNumber of vowels in given string is: \n");
//   printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d", a, e, i, o, u);
// }

// int main() {
//   char str[100];
//   printf("Enter a string: ");
//   fgets(str, 100, stdin);
//   vowels(str);
//   return 0;
// }

