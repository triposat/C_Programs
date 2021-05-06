#include <stdio.h>
#include <string.h>
int main()
{
	char name[40][30], firstchar;
	int num, i;
	printf("\n How many Students are there in class: ");
	scanf("%d", &num);
	printf("\n Enter The names of Students: ");
	for (i = 0; i <= num; i++)
		gets(name[i]);
	printf("\n Enter The 1st character of Students name: ");
	scanf("%c", &firstchar);
	printf("\n Students who's name starts with %c are: ", firstchar);
	for (i = 0; i < num; i++)
		if (name[i][0] == firstchar)
			puts(name[i]);
}
