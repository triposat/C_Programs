#include <stdio.h>
int main()
{
    int i, n, a[100], max, pos, b[100], max2, pos1;
    printf("\n Enter No. of Elements: ");
    scanf("%d", &n);
    printf("\n Enter the Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); //inputing of n No. of Array...
    }
    max = a[0]; //consider first element as largest...
    pos = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max) //here first we check that the No. at 0 is greter than MAX or not...
        {
            max = a[i]; // found greater Number...
            pos = i + 1;
        }
        // Now again this max goes to if condition...
        // and comparison start at new value of i...
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != max)
        {
            b[i] = a[i];
        }
    }
    max2 = b[0];
    pos1 = i;
    for (i = 0; i < n - 1; i++)
    {
        if (b[i] > max2)
        {
            max2 = b[i];
            pos1 = i + 1;
        }
    }
    printf("\n First Greater No. is: %d", max);
    printf("\n Position of this No. is: %d", pos);
    printf("\n\n Second Greater No. is: %d", max2);
    printf("\n Position of this No. is: %d", pos1);
}
