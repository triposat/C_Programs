#include <stdio.h>
int main()
{
    int num, i, count = 0, sum = 0, d, copy, fact = 1, rev = 0;
    int choice;
    char ch = num;
    printf("\n Please Enter a Number: ");
    scanf("%d", &num);
    printf("\n 1. To Find Fac torial of given number\n 2. To Print Multication Table of a given number\n 3. To find Sum\n 4. To check Prime number or not\n 5. To check Perfect Number or not\n 6. To check Armstrong Number or not\n 7. To check Strong Number or not\n 8. To Find Reverse of giving number\n 9. To Palindrome or not\n 10.To Check Capital or Small letter");
    printf("\n  Enter Your Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for (i = 1; i <= num; i++)
            fact = fact * i;
        printf("Factorial is: %d", fact);
        break;
    case 2:
        for (i = 1; i <= 10; i++)
            printf("\n %d*%d = %d", num, i, num * i);
        break;
    case 3:
        copy = num;
        while (num != 0)
        {
            d = num % 10;
            sum = sum + d;
            num = num / 10;
        }
        printf("sum of digits are: %d", sum);
        break;
    case 4:
        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
                count++;
        }
        if (count == 1)
            printf("%d is Prime a number", num);
        else
            printf("%d is not a Prime  number", num);
        break;
    case 5:
        for (i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == num)
            printf("\n  %d is a Perfect Number", num);
        else
            printf("\n  %d is not a Perfect Number", num);
        break;
    case 6:
        copy = num;
        while (num != 0)
        {
            count++;
            num = num / 10;
        }
        copy = num;
        while (num != 0)
        {
            d = num % 10;
            sum = sum + pow(d, count);
            num = num / 10;
        }
        if (sum == copy)
            printf("\n  It is an Armstrong Number");
        else
            printf("\n  It is not an Armstrong Number");
        break;
    case 7:
        copy = num; //copy karlo bhaiya
        while (num != 0)
        {
            d = num % 10;
            for (i = 1, fact = 1; i <= d; i++) //factorial of digit
            {
                fact = fact * i;
            }

            sum = sum + fact;
            num = num / 10;
        }
        if (sum == copy)
            printf("\n  %d is a Strong Number", copy);
        else
            printf("\n  %d is not a Strong Number", copy);
        break;
    case 8:
        while (num != 0)
        {
            d = num % 10;
            rev = rev * 10 + d;
            num = num / 10;
        }
        printf("\n  Reverse of a given number is: %d", rev);
        break;
    case 9:
        copy = num;
        while (num != 0)
        {
            d = num % 10;
            rev = rev * 10 + d;
            num = num / 10;
        }
        if (rev == copy)
            printf("\n %d is a Palindrome Number", rev);
        else
            printf("\n %d is not a Palindrome Number", rev);
        break;
    case 10:
    {
        printf("\n  Character is: %c", num);
    }
        if ((num > 64) && (num < 91))
        {
            printf(" \n  %c is a Capital Letter", num);
        }
        else if ((num > 97) && (num <= 123))
        {
            printf("\n  %c is a Small Letter", num);
        }
        else
        {
            printf("\n  It is a number");
        }
        break;
    default:
        printf("\n  ######Please Enter A Valid Choice#####");
    }
    return 0;
}
