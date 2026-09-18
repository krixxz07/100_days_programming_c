//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
{
    int rows;
    int cols;
    int matrix[10][10];
    int i;
    int j;
    int d;
    int start_row;
    int start_col;
    int r;
    int c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i = i + 1)
    {
        for (j = 0; j < cols; j = j + 1)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");
    for (d = 0; d < rows + cols - 1; d = d + 1)
    {
        if (d < cols)
        {
            start_col = d;
        }
        else
        {
            start_col = cols - 1;
        }

        start_row = d - start_col;
        r = start_row;
        c = start_col;

        while (r < rows && c >= 0)
        {
            printf("%d ", matrix[r][c]);
            r = r + 1;
            c = c - 1;
        }
        printf("\n");
    }

    return 0;
}