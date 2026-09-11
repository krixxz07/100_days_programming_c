//Search in a sorted array using binary search.
#include <stdio.h>

int binary_search(int arr[], int size, int target)
{
    int low;
    int high;
    int mid;

    low = 0;
    high = size - 1;


    while (low <= high)
    {
        mid = low + (high - low) / 2;


        if (arr[mid] == target)
        {
            return mid;
        }


        if (arr[mid] < target)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }


    return -1;
}

int main()
{
    int arr[10];
    int size;
    int target;
    int result;
    int i;

    size = 10;
    arr[0] = 2;
    arr[1] = 5;
    arr[2] = 8;
    arr[3] = 12;
    arr[4] = 16;
    arr[5] = 23;
    arr[6] = 38;
    arr[7] = 45;
    arr[8] = 56;
    arr[9] = 72;

    target = 23;

    result = binary_search(arr, size, target);

    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}