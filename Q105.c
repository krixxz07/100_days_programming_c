//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("-1");
        return 0;
    }

    int nums[n];
    int i = 0;

    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &nums[i]);
    }

    int candidate = 0;
    int count = 0;

    for (i = 0; i < n; i = i + 1)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count = count + 1;
        }
        else
        {
            count = count - 1;
        }
    }

    int total = 0;

    for (i = 0; i < n; i = i + 1)
    {
        if (nums[i] == candidate)
        {
            total = total + 1;
        }
    }

    if (total > n / 2)
    {
        printf("%d", candidate);
    }
    else
    {
        printf("-1");
    }

    return 0;
}