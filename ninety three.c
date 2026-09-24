//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int count[256];
    int i;
    int len1;
    int len2;
    int isAnagram;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    isAnagram = 1;

    if (len1 != len2)
    {
        isAnagram = 0;
    }

    i = 0;
    while (i < 256)
    {
        count[i] = 0;
        i = i + 1;
    }

    if (isAnagram == 1)
    {
        i = 0;
        while (i < len1)
        {
            count[(int)str1[i]] = count[(int)str1[i]] + 1;
            i = i + 1;
        }

        i = 0;
        while (i < len2)
        {
            count[(int)str2[i]] = count[(int)str2[i]] - 1;
            i = i + 1;
        }

        i = 0;
        while (i < 256)
        {
            if (count[i] != 0)
            {
                isAnagram = 0;
            }
            i = i + 1;
        }
    }

    if (isAnagram == 1)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}