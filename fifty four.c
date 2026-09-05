/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   **/
#include <stdio.h>

int main()
{
    int n;
    n = 4;

    int i;
    i = 1;

    /* Upper half: rows with increasing number of stars (1, 3, 5, 7) */
    while (i <= n)
    {
        int spaces;
        spaces = n - i;

        int j;
        j = 1;

        /* Print leading spaces to center the stars */
        while (j <= spaces)
        {
            printf(" ");
            j = j + 1;
        }

        int stars;
        stars = 2 * i - 1;

        int k;
        k = 1;

        /* Print the stars for this row */
        while (k <= stars)
        {
            printf("*");
            k = k + 1;
        }

        printf("\n");
        i = i + 1;
    }

    int p;
    p = n - 1;

    /* Lower half: rows with decreasing number of stars (5, 3, 1) */
    while (p >= 1)
    {
        int spaces2;
        spaces2 = n - p;

        int q;
        q = 1;

        /* Print leading spaces to center the stars */
        while (q <= spaces2)
        {
            printf(" ");
            q = q + 1;
        }

        int stars2;
        stars2 = 2 * p - 1;

        int r;
        r = 1;

        /* Print the stars for this row */
        while (r <= stars2)
        {
            printf("*");
            r = r + 1;
        }

        printf("\n");
        p = p - 1;
    }

    return 0;
}