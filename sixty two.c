//Reverse an array without taking extra space.
#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int start;
    int end;
    int temp;

    start = 0;
    end = n - 1;

    while (start < end)
    {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start = start + 1;
        end = end - 1;
    }
}

int main()
{
    int arr[100];
    int n;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i = i + 1;
    }

    reverseArray(arr, n);


    printf("Reversed array: ");
    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i = i + 1;
    }
    printf("\n");

    return 0;
}