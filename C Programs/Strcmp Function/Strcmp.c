#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50];
    puts("\n Enter the String: ");
    gets(a);
    puts("\n Enter the String: ");
    gets(b);
    printf("\n Similarity b/w both Strings: %d", strcmp(a, b));
}
