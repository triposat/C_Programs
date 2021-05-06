#include <stdio.h>
#include <string.h>
int main()
{
   int i, j, count = 0;
   char str[25][25], temp[25];
   puts("How Many names you are going to enter: ");
   scanf("%d", &count);
   fflush(stdin);
   puts("Enter names one by one: ");
   for (i = 0; i < count; i++)
      gets(str[i]);
   for (i = 0; i < count; i++)
      for (j = i + 1; j < count; j++)
      {
         if (strcmpi(str[i], str[j]) > 0)
         {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   printf("Order of Sorted Strings: \n");
   for (i = 0; i <= count; i++)
      puts(str[i]);

   return 0;
}
