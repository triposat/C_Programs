#include <stdio.h>
int main()
{
    char y;
    printf("Enter a Character: ");
    scanf("%c", &y);
    if ((y >= 64) && (y < 91))
    {
        printf("%c is a Capital letter", y);
    }
    else if ((y >= 97) && (y <= 123))
    {
        printf("%c is a Small letter", y);
    }
    else
    {
        printf("%c is a Number", y);
    }
}
