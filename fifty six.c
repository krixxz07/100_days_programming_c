//Read and print elements of a one-dimensional array.
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

    int j;
    j = 0;


    while (j < n)
    {
        printf("%d ", arr[j]);
        j = j + 1;
    }

    printf("\n");

    return 0;
}