#include <stdio.h>

// Function to reverse an array
void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    // Swap elements from the beginning and end of the array
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the center of the array
        start++;
        end--;
    }
}

int main() {
    int arr[10], n;

    // Input: Size of the array
    printf("Enter the size of the array (<10): ");
    scanf("%d", &n);

    // Input: Array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the reverse function
    reverse(arr, n);

    // Output: Reversed array elements
    printf("The reversed array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
