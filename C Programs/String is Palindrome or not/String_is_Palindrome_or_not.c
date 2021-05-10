#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], rev[100];
    puts("\n Enter a String: ");
    gets(a);
    strcpy(rev, a);
    rev == strrev(a);
    if (strcmp(a, rev) == 0)
        printf("Palindrome String");
    else
        printf("Not Palindrome String");
}
