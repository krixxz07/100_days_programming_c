//Multiply two matrices.
#include <stdio.h>

int main()
{
    int r1;
    int c1;
    int r2;
    int c2;
    int a[10][10];
    int b[10][10];
    int result[10][10];
    int i;
    int j;
    int k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Multiplication not possible\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i = i + 1)
    {
        for (j = 0; j < c1; j = j + 1)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i = i + 1)
    {
        for (j = 0; j < c2; j = j + 1)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i = i + 1)
    {
        for (j = 0; j < c2; j = j + 1)
        {
            result[i][j] = 0;
            for (k = 0; k < c1; k = k + 1)
            {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Product matrix:\n");
    for (i = 0; i < r1; i = i + 1)
    {
        for (j = 0; j < c2; j = j + 1)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}