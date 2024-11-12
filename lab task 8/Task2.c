#include <stdio.h>

int main() {
    int grades[4][4];
    printf("Enter the grades for 4 students across 4 subjects:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter grade for student %d, subject %d: ", i + 1, j + 1);
            scanf("%d", &grades[i][j]);
        }
    }
printf("\nUpdated grades matrix (negative grades replaced with zero):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", grades[i][j]);
             if (grades[i][j] < 0) {
                grades[i][j] = 0;
            }
        }
        printf("\n");
    }

    return 0;
}

  
