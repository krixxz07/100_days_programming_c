//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main()
{
    int n;
    n = 0;
    scanf("%d", &n);

    int arr[n];
    int i;
    i = 0;
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    x = 0;
    scanf("%d", &x);

    int low;
    low = 0;
    int high;
    high = n - 1;
    int answer;
    answer = -1;

    while (low <= high)
    {
        int mid;
        mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            answer = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("%d\n", answer);
    return 0;
}