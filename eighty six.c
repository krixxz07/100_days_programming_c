//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length;
    int i;
    int j;
    int isPalindrome;

    printf("Enter a string: ");
    scanf("%99s", str);

    length = strlen(str);
    i = 0;
    j = length - 1;
    isPalindrome = 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
        i = i + 1;
        j = j - 1;
    }

    if (isPalindrome == 1)
    {
        printf("%s is a palindrome\n", str);
    }
    else
    {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}