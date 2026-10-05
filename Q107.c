/*Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    if (n <= 0)
    {
        return 0;
    }

    int arr[n];
    int i = 0;
    int j = 0;

    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &arr[i]);
    }

    int previousGreater = -1;

    for (i = 0; i < n; i = i + 1)
    {
        previousGreater = -1;

        for (j = i - 1; j >= 0; j = j - 1)
        {
            if (arr[j] > arr[i])
            {
                previousGreater = arr[j];
                break;
            }
        }

        if (i > 0)
        {
            printf(",");
        }

        printf("%d", previousGreater);
    }

    return 0;
}
