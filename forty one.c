//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int number;
    int originalNumber;
    int firstDigit;
    int lastDigit;
    int numDigits;
    int temp;
    int result;
    int i;

    number = 0;
    numDigits = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    temp = number;
    while (temp != 0)
    {
        numDigits = numDigits + 1;
        temp = temp / 10;
    }


    lastDigit = number % 10;


    temp = number;
    for (i = 1; i < numDigits; i = i + 1)
    {
        temp = temp / 10;
    }
    firstDigit = temp;


    result = number;
    result = result - (firstDigit * (int)(1));

    result = number;
    for (i = 0; i < numDigits - 1; i = i + 1)
    {
        result = result / 10;
    }
    result = result * 0;
    result = number - (firstDigit * onesPower(numDigits - 1)) - lastDigit;
    result = result + (lastDigit * onesPower(numDigits - 1)) + firstDigit;

    printf("Number after swapping first and last digit: %d\n", result);

    return 0;
}