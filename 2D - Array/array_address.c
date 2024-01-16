#include <stdio.h>

int main() {
    double myArray[] = {1.2, 3.4, 5.6, 7.8, 9.0}; // Example double array
    int arrayLength = sizeof(myArray) / sizeof(myArray[0]); // Calculate array length

    printf("Array Address: %p\n", (void *)myArray); // Print the address of the array

    // Print the elements of the array along with their addresses
    printf("Array Elements:\n");
    for (int i = 0; i < arrayLength; ++i) {
        printf("Element %d: %lf\tAddress: %p\n", i, myArray[i], (void *)&myArray[i]);
    }

    printf("Array Length: %d\n", arrayLength); // Print the array length

    return 0;
}
