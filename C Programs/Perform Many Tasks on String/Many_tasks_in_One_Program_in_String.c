#include <stdio.h>
int main(satyamtripathisoluteyou)
{
	int num, i, count = 0, sum = 0, d, copy, fact = 1, rev = 0;
	int choice;
	char ch = num;
	printf("\nPlease Enter any Number: ");
	scanf("%d", &num);
	printf("\n Enter Your Choice: \n1.To Find Factorial of given number\n2.To Print Multication Table of a given number\n3.To Find sum\n4.To check prime number or not\n5.To check PERFECT NUMBER or NOT\n6.To check ARMSTRONG NUMBER or not\n7.To check STRONG NUMBER or not\n8.To Find Reverse Of giving number\n9.To PALINDROME or not\n10.To Check Capital or Small letter");
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
			printf("\n%d*%d = %d", num, i, num * i);
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
			printf("\n %d is a PERFECT NUMBER", num);
		else
			printf("\n %d is not a PERFECT NUMBER", num);
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
			printf("\n It is an ARMSTRONG NUMBER");
		else
			printf("\n It is not an ARMSTRONG NUMBER");
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
			printf("\n %d is a STRONG NUMBER", copy);
		else
			printf("\n %d is not a STRONG NUMBER", copy);
		break;
	case 8:
		while (num != 0)
		{
			d = num % 10;
			rev = rev * 10 + d;
			num = num / 10;
		}
		printf("\n Reverse of a Given Number is: %d", rev);
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
			printf("\n%d is a PALINDROME NUMBER", rev);
		else
			printf("\n%d is not a PALINDROME NUMBER", rev);
		break;
	case 10:
	{
		printf("\n CHARACTER is: %c", num);
	}
		if ((num > 64) && (num < 91))
		{
			printf(" \n %c is a CAPITAL LETTER", num);
		}
		else if ((num > 97) && (num <= 123))
		{
			printf("\n %c is a SMALL LETTER", num);
		}
		else
		{
			printf("\n It is a number");
		}
		break;
	default:
		printf("\n ****######Please Enter A Valid Choice****#####");
	}
	printf("\n ......I hope you enjoy this shortcut.......");
	return 0;
}
