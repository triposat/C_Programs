#include <stdio.h>
#include <process.h>
int main()
{
    FILE *p;
    char file[50], temp[50], word[50], ch;
    int i = 0, count = 0;
    // Create a new text file, and enter the full name of the file like "hey.txt"
    printf("\n Enter the Name of the File: ");
    gets(file);
    p = fopen(file, "r");
    if (p == NULL)
    {
        printf("\n Unable to exist...");
        exit(1);
    }
    // Search for the word
    printf("\n Enter the Word you are looking for: ");
    gets(word);
    while ((ch = fgetc(p)) != EOF)
    {
        if (ch == ' ' || ch == '\n')
        {
            temp[i] = '\0';
            if (strcmpi(temp, word) == 0)
            {
                count++;
            }
            i = 0;
        }
        else
        {
            temp[i] = ch;
            i++;
        }
    }
    printf("\n %s Occurs => %d times", word, count);
}
