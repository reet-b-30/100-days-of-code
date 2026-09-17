#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, distinct = 1;

    printf("Enter elements of 3x3 matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check diagonal elements
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
            }
        }
    }

    if (distinct == 1)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
