#include <stdio.h>
int main()
{
   int a[20][20];
   int i, j, r, c, max, min, m, n, s, t;
   printf("\n Enter the Order of First Matrix: ");
   scanf("%d%d", &r, &c);
   printf("\n Enter the Matrix of Order %d X %d: ", r, c);
   for (i = 0; i < r; i++)
   {
      for (j = 0; j < c; j++)
      {
         scanf("%d", &a[i][j]);
      }
      printf("\n");
   }
   min = max = a[0][0];
   m = 1;
   n = 1;
   s = 1;
   t = 1;
   for (i = 0; i < r; i++)
   {
      for (j = 0; j < c; j++)
      {
         if (a[i][j] < min)
         {
            min = a[i][j];
            s = i + 1;
            t = j + 1;
         }
      }
   }
   for (i = 0; i < r; i++)
   {
      for (j = 0; j < c; j++)
      {
         if (a[i][j] > max)
         {
            max = a[i][j];
            m = i + 1;
            n = j + 1;
         }
      }
   }

   printf("\n==========================================================\n");
   printf("\n Maximum Number in the Array is: %d", max);
   printf("\n Location of Max. No. is: %d row, %d column\n", m, n);
   printf("\n Minimum Number in the Array is: %d", min);
   printf("\n Location of Min. No. is: %d row, %d column", s, t);
}
