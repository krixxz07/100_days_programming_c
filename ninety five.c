//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[])
{
    int len1;
    int len2;
    char combined[200];
    char *result;

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 != len2)
    {
        return 0;
    }

    strcpy(combined, s1);
    strcat(combined, s1);

    result = strstr(combined, s2);

    if (result != NULL)
    {
        return 1;
    }

    return 0;
}

int main()
{
    char str1[100];
    char str2[100];
    int answer;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    answer = isRotation(str1, str2);

    if (answer == 1)
    {
        printf("Yes, %s is a rotation of %s\n", str2, str1);
    }
    else
    {
        printf("No, %s is not a rotation of %s\n", str2, str1);
    }

    return 0;
}