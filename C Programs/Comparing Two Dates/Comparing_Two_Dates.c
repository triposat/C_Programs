#include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;

} satyam;
int main()
{
    satyam d1, d2;
    printf("\n Enter First Date: ");
    scanf("%d%*c%d%*c%d", &d1.day, &d1.month, &d1.year);
    printf("Enter Second Date: ");
    scanf("%d%*c%d%*c%d", &d2.day, &d2.month, &d2.year);
    // if(d1==d2)...Invalid statement..
    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
    {
        printf("Both the Dates are Same: %d/%d/%d = %d/%d/%d", d1.day, d1.month, d1.year, d2.day, d2.month, d2.year);
        return 0;
    }
    else
    {
        printf("Both the Dates are Different: %d/%d/%d =/= %d/%d/%d", d1.day, d1.month, d1.year, d2.day, d2.month, d2.year);
        return 1;
    }
}
