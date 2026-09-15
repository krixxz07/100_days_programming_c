//Find the transpose of a matrix.
#include <stdio.h>

#define ROWS 2
#define COLS 3

int main()
{
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int transpose[COLS][ROWS];
    int i;
    int j;


    i = 0;
    while (i < ROWS)
    {
        j = 0;
        while (j < COLS)
        {
            transpose[j][i] = matrix[i][j];

            j = j + 1;
        }

        i = i + 1;
    }

    printf("Original matrix:\n");
    i = 0;
    while (i < ROWS)
    {
        j = 0;
        while (j < COLS)
        {
            printf("%d ", matrix[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }


    printf("\nTranspose matrix:\n");
    i = 0;
    while (i < COLS)
    {
        j = 0;
        while (j < ROWS)
        {
            printf("%d ", transpose[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }

    return 0;
}