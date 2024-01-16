#include <stdio.h>

#define NUM_STUDENTS 4
#define NUM_SUBJECTS 3

// Function to calculate the average mark for a student
double calculateAverage(double marks[]) {
    double sum = 0.0;
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        sum += marks[i];
    }
    return sum / NUM_SUBJECTS;
}

int main() {
    // 2D array to store marks for each student and subject
    double studentMarks[NUM_STUDENTS][NUM_SUBJECTS];

    // Input: Enter marks for each student and subject
    printf("Enter marks for each student and subject:\n");

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            printf("  Enter mark for Subject %d: ", j + 1);
            scanf("%lf", &studentMarks[i][j]);
        }
    }

    // Calculate and print the average mark for each student
    printf("\nAverage Marks for Each Student:\n");

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        double average = calculateAverage(studentMarks[i]);
        printf("Student %d: %.2lf\n", i + 1, average);
    }

    return 0;
}
