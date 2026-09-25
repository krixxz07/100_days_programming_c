//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char word[], int start, int end)
{
    int i;
    int j;
    char temp;

    i = start;
    j = end;

    while (i < j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i = i + 1;
        j = j - 1;
    }
}

void reverseEachWord(char sentence[])
{
    int len;
    int wordStart;
    int i;

    len = strlen(sentence);
    wordStart = 0;
    i = 0;

    while (i <= len)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            reverseWord(sentence, wordStart, i - 1);
            wordStart = i + 1;
        }

        i = i + 1;
    }
}

int main()
{
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, 200, stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    reverseEachWord(sentence);

    printf("Result: %s\n", sentence);

    return 0;
}