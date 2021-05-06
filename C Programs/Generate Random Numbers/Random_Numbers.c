// C program to generate random numbers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int i;
  srand(time(0));
  for (i = 0; i < 3; i++)
    printf("%d ", rand());
}
