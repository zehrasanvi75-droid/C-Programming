#include <stdio.h>

int main()
{
    char word[50];
    int count = 0;

    printf("Enter a sentence: ");

    while (scanf("%s", word) != EOF)
    {
        count++;
    }

    printf("\nWord count = %d", count);

    return 0;
}