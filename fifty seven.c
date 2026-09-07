//Find the sum of array elements.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];

    int i;
    i = 0;


    while (i < n)
    {
        scanf("%d", &arr[i]);
        i = i + 1;
    }

    int sum;
    sum = 0;

    int j;
    j = 0;


    while (j < n)
    {
        sum = sum + arr[j];
        j = j + 1;
    }

    printf("%d\n", sum);

    return 0;
}