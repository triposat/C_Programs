#include <stdio.h>
#include <process.h>
int main()
{
    FILE *data, *even, *r;
    int num;
    data = fopen("data.txt", "r"); // Here any number will be stored
    even = fopen("Even.txt", "w"); // We check if even found then we stored in this file
    odd = fopen("Odd.txt", "w");   // Otherwise stored in this file
    if (data == NULL || even == NULL || odd == NULL)
    {
        printf("\n The Numbers are not present in the file data.txt");
        exit(1);
    }
    while (!feof(data))
    {
        fscanf(data, "%d  ", &num);
        if (num % 2 == 0)
            fprintf(even, "%d  ", num);
        else
            fprintf(odd, "%d  ", num);
    }
    printf("\n Work is Done Successfully...");
    fclose(data);
    fclose(even);
    fclose(odd);
    even = fopen("Even.txt", "rb");
}
