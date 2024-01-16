#include <stdio.h>

// Function to keep a running total
int runningTotal(int value) {
    static int total = 0; // Static variable to retain the running total
    total += value;
    return total;
}

int main() {
    int inputValue;
    
    printf("Inputs: ");
    
    // Read values until EOF (End of File) is encountered
    while (scanf("%d", &inputValue) != EOF) {
        printf("%d ", runningTotal(inputValue));
    }

    printf("\n");

    return 0;
}
