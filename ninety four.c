//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[500];
    char longestWord[100];
    char currentWord[100];
    int i;
    int j;
    int len;
    int longestLen;
    int currentLen;

    printf("Enter a sentence: ");
    fgets(sentence, 500, stdin);

    len = strlen(sentence);

    if (len > 0 && sentence[len - 1] == '\n')
    {
        sentence[len - 1] = '\0';
        len = len - 1;
    }

    longestLen = 0;
    currentLen = 0;
    i = 0;
    j = 0;

    while (i <= len)
    {
        if (sentence[i] != ' ' && sentence[i] != '\0')
        {
            currentWord[j] = sentence[i];
            j = j + 1;
            currentLen = currentLen + 1;
        }
        else
        {
            currentWord[j] = '\0';

            if (currentLen > longestLen)
            {
                longestLen = currentLen;
                strcpy(longestWord, currentWord);
            }

            j = 0;
            currentLen = 0;
        }

        i = i + 1;
    }

    printf("The longest word is: %s\n", longestWord);
    printf("Its length is: %d\n", longestLen);

    return 0;
}