//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rowSum[ROWS];
    int i;
    int j;

    i = 0;
    while (i < ROWS)
    {
        rowSum[i] = 0;

        j = 0;
        while (j < COLS)
        {

            rowSum[i] = rowSum[i] + matrix[i][j];

            j = j + 1;
        }

        i = i + 1;
    }


    i = 0;
    while (i < ROWS)
    {
        printf("Sum of row %d = %d\n", i, rowSum[i]);
        i = i + 1;
    }

    return 0;
}