#include <stdio.h>
int main()
{
	int i, n, choice, j, temp, a[100], mid, beg, end, key, flag = 0, max, min, sum = 0;
	float avg;
satyam:
	printf("\n Enter The Number of Elements:");
	scanf("%d", &n);
	printf("\n\n Enter The %d Elements:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("\n\n Please Enter The Choice For Performing Different Operations:\n 1.To sorted The Array\n 2.To Search Any Key\n 3.To Minimum and Maximum Number in The Array\n 4.To Perform Operation of Even Or Odd\n 5. To Find The Sum and Average of Given Array\n 6.To Find Sum of all ODD No. in an Array");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		for (i = 1; i <= (n - 1); i++) //for passes.....
		{
			for (j = 0; j <= (n - i - 1); j++) // To compare Adjacent....
			{
				if (a[j] > a[j + 1])
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		printf("\n Numbers After Sorting are: \n");
		for (i = 0; i < n; i++)
			printf("\n%d", i[a]);
		break;
	}
	case 2:
	{
		printf("\n Enter The No. That You Wants You Search...\n");
		scanf("%d", &key);
		beg = 0;
		end = n - 1;
		while (beg <= end)
		{
			mid = (beg + end) / 2;
			if (a[mid] == key)
			{
				printf("\n  %d is found at position:%d", key, mid + 1);
				flag++;
				break;
			}
			else if (key < a[mid])
				end = mid - 1;
			else
				beg = mid + 1;
		}
		break;
		if (flag == 0)
		{
			printf("\n  %d is not found In the Given Nos.", key);
		}
	}
	case 3:
	{
		max = min = a[0];
		for (i = 0; i < n; i++)
		{
			if (a[i] < min)
			{
				min = a[i];
			}
			else if (a[i] > max)
			{
				max = a[i];
			}
		}
		printf("\n Minimum No. is :%d", min);
		printf("\n\n Maximum No. is :%d", max);

		break;
	}
	case 4:
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
				a[i] = a[i] * 2;
			else
				a[i] = a[i] - 1;
		}
		printf("\n\n Numbers After  Operation Are:");
		for (i = 0; i < n; i++)
			printf("%d  ", a[i]);
		break;
	}
	case 5:
	{

		sum = sum + a[i];
		printf("\n Sum of Array is:%d", sum);
		avg = (float)sum / n;
		printf("\n Average of Array is :%0.2f", avg);
		break;
	}
	case 6:
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0)
				sum = sum + a[i];
		}
		printf("\n Sum of Odd No. Are :%d", sum);
		break;
	}
	}
	goto satyam;
}
