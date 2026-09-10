//Search for an element in an array using linear search.
#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{
    int i;
    i = 0;

    while (i < n)
    {

        if (arr[i] == key)
        {
            return i;
        }
        i = i + 1;
    }

    return -1;
}

int main()
{
    int arr[100];
    int n;
    int key;
    int i;
    int result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i = i + 1;
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, n, key);


    if (result == -1)
    {
        printf("Element not found in the array.\n");
    }
    else
    {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}