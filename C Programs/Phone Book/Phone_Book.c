// Try this Program on DEV-C++ IDE

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
typedef struct name
{
    char fname[20];
    char lname[20];
} NAM;
typedef struct contact
{
    char landline[15];
    char mobile[20];
} CON;
typedef struct phoneentry
{
    NAM pname;
    CON pcontact;
} EMPIRE;
void printmenu()
{
    printf("\n\n\n\n\n\n\n");
    printf("\t\t[1] PRESS {1} To ADD Records in Phone Book\n\t\t");
    printf("[2] PRESS {2} To DELETE Records From Phone Book\n\t\t");
    printf("[3] PRESS {3} To List Available Records in Phone Book\n\t\t");
    printf("[4] PRESS {4} To SEARCH Records in Phone Book\n\t\t");
    printf("[5] PRESS {5} To EXIT\n");
}
void addrecord(EMPIRE book[], int *count)
{
    char ch;
    printf("\n\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==");
    printf("\n\t\t        =                                    =");
    printf("\n\t\t        =           ADD RECORDS              =");
    printf("\n\t\t        =                                    =");
    printf("\n\t\t        ==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    sleep(2);
    fflush(stdin);
    system("cls");
    printf("\n Enter First Name of the Person: \t");
    gets(book[*count].pname.fname);
    system("cls");
    printf("\n Enter LAST Name of the Person: \t");
    gets(book[*count].pname.lname);
    system("cls");
    printf("\n Enter Landline Number: \t");
    gets(book[*count].pcontact.landline);
    system("cls");
    printf("\n Enter Mobile Number Number: \t");
    gets(book[*count].pcontact.mobile);
    system("cls");
    (*count)++;
    printf("\n Record saved Successfully\n\n");
    printf("\n Do you want to Enter more records: Press(y/n)\t\n\n");
    ;
    ch = getch();
    if (ch == 'y' || ch == 'Y')
    {
        system("cls");
        addrecord(book, count);
    }
    else
        return;
}

void listrecords(EMPIRE book[], int count)
{
    int i = 0;
    printf("\n\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==");
    printf("\n\t\t        =                                    =");
    printf("\n\t\t        =           LIST RECORDS             =");
    printf("\n\t\t        =                                    =");
    printf("\n\t\t        ==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    sleep(2);
    system("cls");
    printf("\n %-4s\t %-20s %-20s %-13s %-12s\n", "S.No", "First Name", "Last Name", "Landline No.", "Mobile No.");
    printf("--------------------------------------------------------------------------------\n");
    while (i < count)
    {
        printf("%4d. \t%-20s %-20s %-12s\t%-12s\n", i + 1, book[i].pname.fname, book[i].pname.lname, book[i].pcontact.landline, book[i].pcontact.mobile);
        //sleep(1);
        i++;
    }
    printf("--------------------------------------------------------------------------------\n");
    printf("\n %d Record Available\n", count);
    printf("\n Press any key to return to Main Menu\n\n");
    getch();
    //system("cls");
}
void searchrecord(EMPIRE book[], int count)
{
    //system("cls");
    int ch, i = 0, found = 0, no = 0;
    char key[25];
    printf("\n\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==");
    printf("\n\t\t        =                                    =");
    printf("\n\t\t        =          SEARCH RECORDS            =");
    printf("\n\t\t        =                                    =");
    printf("\n\t\t        ==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    sleep(2);
    system("cls");
    printf("\n\n\n\n\n\n\n\t\t\t");
    printf("1.Press 1 to search by First Name\n");
    printf("\t\t\t");
    printf("2.Press 2 to search by Last Name\n");
    printf("\t\t\t");
    printf("3.Press 3 to search by Mobile Number\n");
    printf("\t\t\t");
    ch = getch();
    system("cls");
    if (ch == '1')
        goto k;
    else if (ch == '2')
        goto l;
    else if (ch == '3')
        goto m;
    else
        return;
    switch (ch)
    {
    k:
    case 1:
        fflush(stdin);
        printf("\n Enter the First Name of the Person: \t");
        gets(key);
        while (i < count)
        {
            if (strcmpi(book[i].pname.fname, key) == 0)
            {
                if (no == 0)
                    printf("\n %-4s\t %-20s%-20s%-13s\t%-12s\n", "S.No", "First Name", "Last Name", "Landline No.", "Mobile No.");
                found = 1;
                no++;
                printf("--------------------------------------------------------------------------------\n");
                printf("%4d. \t%-20s%-20s%-12s\t%-12s\n", i + 1, book[i].pname.fname, book[i].pname.lname, book[i].pcontact.landline, book[i].pcontact.mobile);
                printf("--------------------------------------------------------------------------------\n");
            }
            i++;
        }
        if (found == 0)
            printf("\n\nNo Record found!");
        else
            printf("\n %d Records found\n", no);
        printf("\n\n Press any key to continue...\n\n");
        getch();
        break;
    l:
    case 2:
        fflush(stdin);
        printf("\n Enter the Last Name of the Person: \t");
        gets(key);
        while (i < count)
        {
            if (strcmpi(book[i].pname.lname, key) == 0)
            {
                if (no == 0)
                    printf("\n %-4s\t%-20s%-20s%-13s\t%-12s\n", "S.No", "First name", "Last name", "Landline No.", "Mobile No.");
                found = 1;
                no++;
                printf("--------------------------------------------------------------------------------\n");
                printf("%4d. \t%-20s%-20s%-12s\t%-12s\n", i + 1, book[i].pname.fname, book[i].pname.lname, book[i].pcontact.landline, book[i].pcontact.mobile);
                printf("--------------------------------------------------------------------------------\n");
            }
            i++;
        }
        if (found == 0)
            printf("\n\nNo Record found!\n\n");
        else
            printf("\n %d Records found\n", no);
        printf("\n\n Press any key to continue...\n\n");
        getch();
        break;
    m:
    case 3:
        fflush(stdin);
        printf("\n Enter the Mobile No. of the Person: \t");
        gets(key);
        while (i < count)
        {
            if (strcmp(book[i].pcontact.mobile, key) == 0)
            {
                if (no == 0)
                    printf("\n %-4s\t%-20s%-20s%-13s\t%-12s\n", "S.No", "First name", "Last name", "Landline No.", "Mobile No.");
                found = 1;
                no++;
                printf("--------------------------------------------------------------------------------\n");
                printf("%4d. \t%-20s %-20s %-12s\t%-12s\n", i + 1, book[i].pname.fname, book[i].pname.lname, book[i].pcontact.landline, book[i].pcontact.mobile);
                printf("--------------------------------------------------------------------------------\n");
            }
            i++;
        }
        if (found == 0)
            printf("\n\n No Record found!\n\n");
        else
            printf("\n %d Records found\n", no);
        printf("\n\n Press any key to continue...\n\n");
        getch();
        break;
    }
}

deleterecord(EMPIRE book[], int *count)
{
    //	system("cls");
    int sno, i;
    printf("\n\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==");
    printf("\n\t\t        =                                    =");
    printf("\n\t\t        =          DELETE RECORDS            =");
    printf("\n\t\t        =                                    =");
    printf("\n\t\t        ==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    sleep(2);
    system("cls");
    printf("\n Enter the S.No of the record that you want to Delete: \t");
    scanf("%d", &sno);
    i = sno;
    if (sno <= 0 || sno > *count)
        printf("\n Not a Valid S.No");
    else
    {
        while (i < *count)
        {
            book[i] = book[i + 1];
            i++;
        }
        *count = *count - 1;
        printf("\n Record Successfully Deleted.\n");
    }
    printf("\n Press any key to return to Main Menu\n\n");
    getch();
}
int main()
{
    system("color F0");
    //start();
    int ch, count = 0;
    EMPIRE book[100];
    while (1)
    {
        system("cls");
        printf("\t\t#########################################################");
        printf("\n\t\t############                                 ############");
        printf("\n\t\t############      WELCOME TO PHONEBOOK       ############");
        printf("\n\t\t############                                 ############");
        printf("\n\t\t#########################################################");
        sleep(3);
        system("cls");
        printmenu();
        //printf("\n\t\t\t\t Enter choice :\t");
        //scanf("%d",&ch);
        ch = getch();
        if (ch == '1')
        {
            system("cls");
            goto x;
        }
        else if (ch == '2')
        {
            system("cls");
            goto a;
        }
        else if (ch == '3')
        {
            system("cls");
            goto b;
        }
        else if (ch == '4')
        {
            system("cls");
            goto c;
        }
        else if (ch == '5')
        {
            system("cls");
            goto d;
        }
        else
        {
            system("cls");
            goto y;
        }
        switch (ch)
        {
        x:
        case 1:
            addrecord(book, &count);
            break;
        a:
        case 2:
            deleterecord(book, &count);
            break;
        b:
        case 3:
            listrecords(book, count);
            break;
        c:
        case 4:
            searchrecord(book, count);
            break;
        d:
        case 5:
            exit(1);
        default:
        y:
            printf("\n Invalid Option!, Please try Again...");
            exit(1);
        }
    }
}
