#include <stdio.h>
#include <string.h>
typedef union unvrsty
{
	char dept[20];
	int num;
} satyam;
int main()
{
	satyam a[100];
	int n, i;
	printf("\n Enter Number of department: ");
	scanf("%d", &n);
	fflush(stdin);
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		printf("\n Enter The name of %d Department: ", i + 1);
		gets(a[i].dept);
		fflush(stdin);
		printf("\n Enter The Number of Faculty Member :");
		scanf("%d", &a[i].num);
	}
	fflush(stdin);
	printf("\n Name of Department Having more than 20 Faculty member: ");
	for (i = 0; i < n; i++)
	{
		if (a[i].num > 20)
		{
			printf("%s", a[i].dept);
		}
	}
}
