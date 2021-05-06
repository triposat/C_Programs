#include <stdio.h>
#include <string.h>
void str_rev(char a[])
{
  char temp = 0;
  int l = 0, i = 0;
  l = strlen(a);
  for (i = 0; i < l; i = i + 2)
  {
    if (a[i] != ' ')
    {
      temp = a[i];
      a[i] = a[i + 1];
      a[i + 1] = temp;
    }
    else
      i--;
  }
  printf("%s\n", a);
}
int main()
{
  char a[50];
  puts("\n Enter Any Sentence: ");
  gets(a);
  str_rev(a);
}
