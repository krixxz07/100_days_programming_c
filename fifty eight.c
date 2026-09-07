//Find the maximum and minimum element in an array.
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

    int max;
    max = arr[0];

    int min;
    min = arr[0];

    int j;
    j = 1;


    while (j < n)
    {

        if (arr[j] > max)
        {
            max = arr[j];
        }


        if (arr[j] < min)
        {
            min = arr[j];
        }

        j = j + 1;
    }

    printf("%d %d\n", max, min);

    return 0;
}