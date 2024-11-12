#include <stdio.h>

int main() {

    int matrix[3][3];
    int rowSum[3] = {0, 0, 0};
    int colSum[3] = {0, 0, 0};


    printf("Enter the scores :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter score for participant %d, activity %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    printf("\nMatrix of scores:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of each row (total score of each participant):\n");
    for (int i = 0; i < 3; i++) {
        printf("Participant %d: %d\n", i + 1, rowSum[i]);
    }

    // Display the sum of each column
    printf("Sum of each column (total score for each activity):\n");
    for (int j = 0; j < 3; j++) {
        printf("Activity %d: %d\n", j + 1, colSum[j]);
    }

    return 0;
}
