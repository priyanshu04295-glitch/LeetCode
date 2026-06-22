#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s)
{
    int i = strlen(s) - 1;
    int count = 0;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    // Count characters of the last word
    while (i >= 0 && s[i] != ' ')
    {
        count++;
        i--;
    }

    return count;
}

int main()
{
    char s[100];

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline character added by fgets
    s[strcspn(s, "\n")] = '\0';

    int n = lengthOfLastWord(s);

    printf("The length of the last word is: %d\n", n);

    return 0;
}