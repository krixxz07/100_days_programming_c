//Print each character of a string on a new line.
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    i = 0;
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i = i + 1;
    }

    return 0;
}