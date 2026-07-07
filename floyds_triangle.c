/*
 * Floyd's Triangle
 * ------------------
 * Logic: We keep a single running counter starting at 1.
 * For row i (1 to numRows), we print i numbers, incrementing
 * the counter after every number printed. This naturally produces
 * consecutive natural numbers arranged in a right-angled triangle.
 */

#include <stdio.h>

void printFloydsTriangle(int numRows) {
    int counter = 1;

    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%4d", counter);
            counter++;
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    printf("Enter number of rows: ");
    scanf("%d", &numRows);

    if (numRows <= 0) {
        printf("Number of rows must be positive.\n");
        return 1;
    }

    printFloydsTriangle(numRows);

    return 0;
}
