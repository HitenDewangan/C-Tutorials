#include <stdio.h>

// Function to be counted
void myFunction() {
    static int count = 0; // Static variable to retain its value between function calls
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    // Call the function multiple times
    myFunction();
    myFunction();
    myFunction();

    return 0;
}
