#include <stdio.h>
#include <process.h>
int main()
{
    FILE *p;
    char ch;
    p = fopen("uptu.txt", "r+"); // Make a text file name "uptu" and write some content then open it.
    if (p == NULL)
    {
        printf("\n Unable to continue...");
        exit(1);
    }
    else
    {
        fseek(p, -2L, SEEK_END);
        fputc('N', p);
        fseek(p, 7L, SEEK_SET);
        while ((ch = fgetc(p)) != EOF)
            putchar(ch);
    }
    fclose(p);
}
