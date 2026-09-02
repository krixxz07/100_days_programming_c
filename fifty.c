/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    **/
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


        while (j <= i - 1)
        {
            printf(" ");
            j = j + 1;
        }

        int k;
        k = 1;


        while (k <= rows - i + 1)
        {
            printf("*");
            k = k + 1;
        }

        printf("\n");
        i = i + 1;
    }

    return 0;
}