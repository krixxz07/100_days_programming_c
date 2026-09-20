//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main()
{
    char str[100];
    int count;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    count = 0;
    while (str[count] != '\0')
    {
        count = count + 1;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}