//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main()
{
    int n = 0;
    int x = 1;
    int total = 0;
    int left = 0;
    int right = 0;
    int pivot = -1;

    scanf("%d", &n);

    total = n * (n + 1) / 2;

    while (x <= n)
    {
        left = left + x;
        right = total - left + x;

        if (left == right)
        {
            pivot = x;
            break;
        }

        x = x + 1;
    }

    printf("%d\n", pivot);

    return 0;
}