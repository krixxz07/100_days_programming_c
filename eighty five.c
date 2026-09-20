//Reverse a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length;
    int i;
    int j;
    char temp;

    printf("Enter a string: ");
    scanf("%99s", str);

    length = strlen(str);
    i = 0;
    j = length - 1;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i = i + 1;
        j = j - 1;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}