#include <stdio.h>

int main() {
    int matrix[4][4];
    printf("Enter the elements of a 4x4 matrix (team scores across rounds):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int col = 0; col < 4; col++) {
        for (int i = 0; i < 4 - 1; i++) {
            for (int j = 0; j < 4 - i - 1; j++) {
                if (matrix[j][col] > matrix[j + 1][col]) {
                    int temp = matrix[j][col];
                    matrix[j][col] = matrix[j + 1][col];
                    matrix[j + 1][col] = temp;
                }
            }
        }
    }
    printf("\nMatrix after sorting each column in ascending order:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
