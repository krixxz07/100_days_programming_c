#include <stdio.h>

int main()
{
    int size;
    size = 1;

    int group;
    group = 1;


    while (group <= 3)
    {
        int i;
        i = 1;

        while (i <= size)
        {
            printf("*\n");
            i = i + 1;
        }

        printf("\n");

        size = size + 2;
        group = group + 1;
    }

    size = 3;
    group = 1;


    while (group <= 2)
    {
        int i;
        i = 1;

        while (i <= size)
        {
            printf("*\n");
            i = i + 1;
        }

        printf("\n");

        size = size - 2;
        group = group + 1;
    }

    return 0;
}