#include <stdio.h>
#include <string.h>
struct Employee //Defining structure...
{
    char Dept[20];
    int salary;
    int id;
    char name[20];
};
int main()
{
    struct Employee a[100]; //Array of Structure...
    char dprtmnt[20];
    int i, n, slry;
    printf("\n Enter the Number of Records you want to put: ");
    scanf("%d", &n);
    printf("\n --------------------------------\n");
    //Recording The Data...
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the Information of Employee %d: ", i + 1);
        fflush(stdin); /// Buffer Clean...
        printf("\n\n Name of Employee: ");
        gets(a[i].name);
        fflush(stdin);
        printf(" Id: ");
        scanf("%d", &a[i].id);
        fflush(stdin);
        printf(" Department: ");
        gets(a[i].Dept);
        fflush(stdin);
        printf(" Salary : ");
        scanf("%d", &a[i].salary);
        printf("\n ________________________________\n");
    }
    fflush(stdin);
    printf("\n Enter The Deparment of Employee You Want To be Searched: ");
    gets(dprtmnt);
    printf("\n Enter The Approx Salary of Employee: ");
    scanf("%d", &slry);
    printf("\n ______________________________________________________________\n");
    printf("\n List  of All The Employee having Salary approx to the salary puted by you...");
    for (i = 0; i < n; i++)
    {
        if (strcmpi(a[i].Dept, dprtmnt) == 0 && a[i].salary >= slry) //comparing original salry to approx salary...
        {
            printf("\n Name of Employee: %s\n Id: %d\n Department: %s \n Salary: %d", a[i].name, a[i].id, a[i].Dept, a[i].salary);
        }
        printf("\n ________________________________");
    }
}
