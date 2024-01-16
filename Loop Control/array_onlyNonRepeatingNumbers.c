#include <stdio.h>

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Get array elements from the user
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print unique elements in the array
    printf("Unique elements in the array: ");
    for (int i = 0; i < size; i++) {
        int isUnique = 1;

        // Check if the element is repeated before the current index
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        // Check if the element is repeated after the current index...........after checking that, if it enters if-block means till time...it is unique
        if (isUnique) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    isUnique = 0;
                    break;
                }
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}