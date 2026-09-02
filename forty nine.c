/*Write a program to print the following pattern:
5
45
345
2345
12345*/
#include <stdio.h>

int main()
{
    int rows;
    rows = 5;

    int i;
    i = 1;


    while (i <= rows)
    {

        int start;
        start = rows - i + 1;

        int j;
        j = start;


        while (j <= rows)
        {
            printf("%d", j);
            j = j + 1;
        }

        printf("\n");
        i = i + 1;
    }

    return 0;
}