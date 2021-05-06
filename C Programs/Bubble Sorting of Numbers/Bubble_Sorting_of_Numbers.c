#include <stdio.h>
int Bubble_sort(int a[], int n) //called function...
{
    int i, j, temp;
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
}
int main()
{
    int a[100], n, i, max, min;
    printf("\n Enter Number of Elements:");
    scanf("%d", &n);
    printf("\n Enter %d Elements:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &i[a]);
    printf("\n Numbers Before Sorting are: \n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", i[a]);
    }

    Bubble_sort(a, n); //Here this function is calling...
    printf("\n Numbers After Sorting are: \n");
    for (i = 0; i < n; i++)
        printf("\n%d", i[a]);
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
    printf("\n Minimum No. is: %d", min);
    printf("\n Maximum No. is: %d", max);
}
