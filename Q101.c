//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int main()
{
    int nums[100];
    int n;
    int target;
    int i;
    int low;
    int high;
    int mid;
    int first;
    int last;

    n = 0;
    target = 0;
    i = 0;
    low = 0;
    high = 0;
    mid = 0;
    first = -1;
    last = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    i = 0;
    while (i < n)
    {
        scanf("%d", &nums[i]);
        i = i + 1;
    }

    printf("Enter target: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("%d, %d\n", first, last);

    return 0;
}