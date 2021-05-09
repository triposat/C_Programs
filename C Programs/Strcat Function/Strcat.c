#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50];
    puts("\n Enter a String: ");
    gets(a);
    puts("\n Enter a String: ");
    gets(b);
    printf("\n String after Concatenation: %s", strcat(a, b));
}
