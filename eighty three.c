//Count vowels and consonants in a string.
#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int vowels;
    int consonants;
    char ch;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    vowels = 0;
    consonants = 0;
    i = 0;

    while (str[i] != '\0')
    {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels = vowels + 1;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            consonants = consonants + 1;
        }

        i = i + 1;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}