#include <stdio.h>
int Insertion_sort(int a[], int n) //pass an array and number...
{
	int i, j, key;
	for (i = 1; i < n; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && key < a[j])
		{
			a[j + 1] = a[j]; //Right Shift...
			j--;
		}
		a[j + 1] = key; //Insert The Key at (j+1)th index....
	}
}
int main()
{
	int a[100], n, i;
	printf("\n Enter the numbers: ");
	scanf("%d", &n);
	printf("\n Enter %d Numbers", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("\n Numbers Before Sorting Are: ");
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);

	Insertion_sort(a, n); // calling function by Oppo A3s Phone....

	printf("\n\n Numbers After Sorting Are: ");
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);
}
