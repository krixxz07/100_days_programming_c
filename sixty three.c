//Merge two arrays
#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[])
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[k] = arr1[i];
            i = i + 1;
        }
        else
        {
            merged[k] = arr2[j];
            j = j + 1;
        }
        k = k + 1;
    }

    while (i < n1)
    {
        merged[k] = arr1[i];
        i = i + 1;
        k = k + 1;
    }

    while (j < n2)
    {
        merged[k] = arr2[j];
        j = j + 1;
        k = k + 1;
    }
}

int main()
{
    int arr1[100];
    int arr2[100];
    int merged[200];
    int n1;
    int n2;
    int i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d sorted elements: ", n1);
    i = 0;
    while (i < n1)
    {
        scanf("%d", &arr1[i]);
        i = i + 1;
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d sorted elements: ", n2);
    i = 0;
    while (i < n2)
    {
        scanf("%d", &arr2[i]);
        i = i + 1;
    }

    mergeArrays(arr1, n1, arr2, n2, merged);


    printf("Merged array: ");
    i = 0;
    while (i < n1 + n2)
    {
        printf("%d ", merged[i]);
        i = i + 1;
    }
    printf("\n");

    return 0;
}