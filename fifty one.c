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

    /* Outer loop: controls each row from 1 to rows */
    while (i <= rows)
    {
        int spaces;
        spaces = rows - i;

        int j;
        j = 1;

        
        while (j <= spaces)
        {
            printf(" ");
            j = j + 1;
        }

        int num;
        num = rows - i + 1;

        int k;
        k = 1;

        while (k <= i)
        {
            printf("%d", num);
            num = num + 1;
            k = k + 1;
        }

        printf("\n");
        i = i + 1;
    }

    return 0;
}