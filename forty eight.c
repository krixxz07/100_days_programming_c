/*Write a program to print the following pattern:
1
12
123
1234
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
        int j;
        j = 1;


        while (j <= i)
        {
            printf("%d", j);
            j = j + 1;
        }

        printf("\n");
        i = i + 1;
    }

    return 0;
}