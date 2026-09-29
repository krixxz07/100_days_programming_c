//Print all sub-strings of a string.
#include <stdio.h>

int main()
{
    char str[100];
    int length;
    int i;
    int j;
    int k;

    length = 0;
    i = 0;
    j = 0;
    k = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length = length + 1;
    }

    i = 0;
    while (i < length)
    {
        j = i;
        while (j < length)
        {
            k = i;
            while (k <= j)
            {
                printf("%c", str[k]);
                k = k + 1;
            }
            printf("\n");
            j = j + 1;
        }
        i = i + 1;
    }

    return 0;
}