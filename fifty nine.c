//Count even and odd numbers in an array.
#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i;
    int even_count;
    int odd_count;

    even_count = 0;
    odd_count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i = i + 1)
    {

        if (arr[i] % 2 == 0)
        {
            even_count = even_count + 1;
        }

        else
        {
            odd_count = odd_count + 1;
        }
    }

    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);

    return 0;
}