#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50], c[50];
    int n;
    puts("\n Enter the String: ");
    gets(a);
    puts("\n Enter the value of n: ");
    scanf("%d", &n);
    printf("\n Copy String from a to b: %s", strcpy(b, a));
    printf("\n Copy string from a to c upto n characters: %s", strncpy(c, a, n));
}
