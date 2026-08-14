//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i;
    int positive_count;
    int negative_count;
    int zero_count;

    positive_count = 0;
    negative_count = 0;
    zero_count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i = i + 1)
    {

        if (arr[i] > 0)
        {
            positive_count = positive_count + 1;
        }

        else if (arr[i] < 0)
        {
            negative_count = negative_count + 1;
        }

        else
        {
            zero_count = zero_count + 1;
        }
    }

    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zero elements: %d\n", zero_count);

    return 0;
}