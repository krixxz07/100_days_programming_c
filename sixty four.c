//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long int num;
    long int temp;
    int digit;
    int count[10];
    int i;
    int maxCount;
    int maxDigit;

    i = 0;
    while (i < 10)
    {
        count[i] = 0;
        i = i + 1;
    }

    printf("Enter a number: ");
    scanf("%ld", &num);


    if (num < 0)
    {
        num = -num;
    }

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        count[digit] = count[digit] + 1;
        temp = temp / 10;
    }


    if (num == 0)
    {
        count[0] = 1;
    }

    
    maxCount = count[0];
    maxDigit = 0;
    i = 1;
    while (i < 10)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
        i = i + 1;
    }

    printf("The digit that occurs the most is %d, appearing %d times.\n", maxDigit, maxCount);

    return 0;
}