//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

void insert_sorted(int arr[], int size, int new_size, int key)
{
    int i;
    int j;

    i = size - 1;

    while (i >= 0 && arr[i] > key)
    {
        arr[i + 1] = arr[i];
        i = i - 1;
    }


    arr[i + 1] = key;
}

int main()
{
    int arr[20];
    int size;
    int new_size;
    int key;
    int i;

    size = 6;
    arr[0] = 3;
    arr[1] = 8;
    arr[2] = 15;
    arr[3] = 20;
    arr[4] = 27;
    arr[5] = 34;

    key = 18;
    new_size = size + 1;

    insert_sorted(arr, size, new_size, key);

    printf("Array after insertion: ");
    for (i = 0; i < new_size; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}