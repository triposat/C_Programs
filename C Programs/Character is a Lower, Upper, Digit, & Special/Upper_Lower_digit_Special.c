#include <stdio.h>
int main()
{
    char ch;
    printf("\n Enter a Character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z'))
    {
        printf("\n %c is a Lower Case Character", ch);
        printf("\n ASCII value of character is: %d", ch);
    }
    else if ((ch >= 'A' && ch <= 'Z'))
    {
        printf("\n %c is a Upper Case Character", ch);
        printf("\n ASCII value of character is: %d", ch);
    }
    else if ((ch >= '0' && ch <= '9'))
    {
        printf("\n %c is a Digit", ch);
        printf("\n ASCII value of character is: %d", ch);
    }
    else
    {
        printf("\n Special Symbol");
        printf("\n ASCII value of character is: %d", ch);
    }
}
