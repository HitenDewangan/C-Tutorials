#include <stdio.h>

void findLargestThree(int arr[], int n) {
    if (n < 3) {
        printf("Array should have at least three elements.\n");
        return;
    }

    int first, second, third;
    first = second = third = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[first]) {
            third = second;
            second = first;
            first = i;
        } else if (arr[i] > arr[second]) {
            third = second;
            second = i;
        } else if (arr[i] > arr[third]) {
            third = i;
        }
    }

    printf("Largest Three Elements: %d, %d, %d\n", arr[first], arr[second], arr[third]);
}

int main() {
    int n;

    // Input: Number of elements in the array (Assuming n > 3)
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input: Array elements
    printf("Enter %d positive elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    findLargestThree(arr, n);

    return 0;
}
