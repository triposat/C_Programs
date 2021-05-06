#include <stdio.h>
int main()
{
    int n, key, flag = 0, a[20], i, pos, beg, end, mid;
    printf("\nHow many Elements: ");
    scanf("%d", &n);
    printf("Enter %d Elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the No. that you want to Search: ");
    scanf("%d", &key); // Inputing of key...
    beg = 0;
    end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (a[mid] == key)
        {
            printf("%d is found at position: %d", key, mid + 1);
            flag++;
            break;
        }
        else if (key < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
    }
    if (flag == 0)
        printf("%d is not found in the Given numbers", key);
}
