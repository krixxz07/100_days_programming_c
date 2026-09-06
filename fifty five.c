//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i;
    i = 2;


    while (i <= n)
    {
        int isPrime;
        isPrime = 1;

        int j;
        j = 2;

    
        while (j < i)
        {

            if (i % j == 0)
            {
                isPrime = 0;
            }

            j = j + 1;
        }


        if (isPrime == 1)
        {
            printf("%d ", i);
        }

        i = i + 1;
    }

    printf("\n");

    return 0;
}