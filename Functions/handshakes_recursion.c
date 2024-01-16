#include <stdio.h>

// Recursive function to calculate the number of handshakes
int countHandshakes(int n) {
    // Base case: no handshakes with fewer than 2 people
    if (n <= 1) {
        return 0;
    } else {
        // Recursive case: calculate handshakes with n-1 people and add n-1 (handshakes with the nth person)
        return (n - 1) + countHandshakes(n - 1);
    }
}

int main() {
    int numPeople;

    // Input: Number of people in the group
    printf("Enter the number of people: ");
    scanf("%d", &numPeople);

    // Calculate and print the number of handshakes
    int result = countHandshakes(numPeople);
    printf("Number of handshakes: %d\n", result);

    return 0;
}
