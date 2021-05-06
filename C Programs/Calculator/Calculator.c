#include <stdio.h>
int main()
{
    int a, b, c;
    char ch;
    printf("\nEnter Values: ");
    scanf("%d%c%d", &a, &ch, &b);

    switch (ch)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        c = a - b;
        printf("%d", c);
        break;
    case '*':
        c = a * b;
        printf("%d", c);
        break;
    case '%':
        c = a % b;
        printf("%d", c);
        break;
    case '/':
        c = a / b;
        printf("%d", c);
        break;
    }
}
