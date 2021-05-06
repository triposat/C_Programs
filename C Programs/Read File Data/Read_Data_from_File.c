#include <stdio.h>
int main()
{
	char name[20], branch[10];
	int i, rollno, marks, n;
	FILE *p;
	p = fopen("stdntrcrd.txt", "w"); //open in write mode..
	printf("\n Enter No. of Students: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) //input the record and save to file...
	{
		printf("\n Enter The Information of Student %d", i);
		printf("\n Enter Name: ");
		gets(name);
		printf("\n Enter Branch: ");
		gets(branch);
		fflush(stdin);
		printf("\n  Enter Roll No. ");
		scanf("%d", &rollno);
		printf("\n Enter The Marks: ");
		scanf("%d", &marks);
		fprintf(p, "%s\t%s\t%d\t%d", name, branch, rollno, marks);
	}
	printf("\n Record Successfully Saved to file in Notepad...");
	fclose(p);
	// Display the record from the file in notepad.....
	printf("\n Data of the file stdntrcrd.txt.....");
	p = fopen("stdntrcrd.txt", "r");
	while (!feof(p))
	{
		fscanf(p, "%s\t%s\t%d\t%d", name, branch, &rollno, &marks);
		fprintf(stdout, "\n %s\t%s\t%d\t%d", name, branch, rollno, marks);
	}
}
