#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        system("cls");
        int i, n1, n2, j = 0, k = 0, l = 0, f = 0;
        printf("\n\t\tHow Many Elements Do You Want To Enter in SET 1: ");
        scanf("%d", &n1);
        int a[n1];
        printf("\n");
        for (i = 0;

             i < n1; i++)
        {
            printf("\t\tEnter %d Element: ", i + 1);
            scanf("%d", &a[i]);
        }
        int d[n1];
        for (i = 0; i < n1; i++)
        {
            d[i] = 1;
        }
        for (i = 0; i < n1; i++)
        {
            for (k = i + 1; k < n1; k++)
            {

                if (a[i] == a[k])
                {

                    d[k] = 0;
                }
            }
            if (d[i] != 0)
            {
                l++;
                d[i] = a[i];
            }
        }
        int y = 0;
        for (i = 0; i < n1; i++)
        {
            if (d[i] != 0)
            {
                a[y] = d[i];
                y++;
            }
        }
        printf("\n\t\tHow Many Elements Do You Want To Enter in SET 2: ");
        scanf("%d", &n2);
        int b[n2];
        printf("\n");
        for (i = 0; i < n2; i++)
        {
            printf("\t\tEnter %d Element: ", i + 1);
            scanf("%d", &b[i]);
        }
        int o[n2];
        for (i = 0; i < n2; i++)
        {
            o[i] = 1;
        }
        for (i = 0; i < n2; i++)
        {
            for (k = i + 1; k < n1; k++)
            {

                if (b[i] == b[k])
                {

                    o[k] = 0;
                }
            }
            if (o[i] != 0)
            {
                f++;
                o[i] = b[i];
            }
        }
        int z = 0;
        for (i = 0; i < n2; i++)
        {
            if (o[i] != 0)
            {
                b[z] = o[i];
                z++;
            }
        }
        system("cls");
        int choice;
        while (choice != 3)
        {
            printf("\n\n\t\t\tWhat Do You Want To Do\n");
            printf("\n\t\t\t1. SET 1 - SET 2\n\t\t\t2. SET 2 - SET 1\n\t\t\t3. Exit()");
            printf("\n\n\t\t\tEnter Your Choice: ");
            int c[l + f], flag = 0, w = 0;
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                system("cls");
                if (l >= f)
                {

                    for (i = 0; i < l; i++)
                    {
                        flag = 0;
                        for (j = 0; j < f; j++)
                        {
                            if (a[i] == b[j])
                            {
                                flag = 1;
                                break;
                            }
                        }
                        if (flag == 0)
                        {
                            c[w] = a[i];
                            w++;
                        }
                    }
                    printf("\n\t\t\t\t\tSET 1 - SET 2: ");
                    for (i = 0; i < w; i++)
                    {
                        printf("%d ", c[i]);
                    }
                }
                else
                {
                    system("cls");
                    printf("\n\n\t\tAlert! SET 1 < SET 2");
                }
                break;

            case 2:
                system("cls");
                if (f >= l)
                {

                    for (j = 0; j < f; j++)
                    {
                        flag = 0;
                        for (i = 0; i < l; i++)
                        {
                            if (a[j] == b[i])
                            {
                                flag = 1;
                                break;
                            }
                        }
                        if (flag == 0)
                        {
                            c[w] = b[j];
                            w++;
                        }
                    }
                    printf("\n\t\t\t\t\tSET 2 - SET 1: ");
                    for (j = 0; j < w; j++)
                    {
                        printf("%d ", c[j]);
                    }
                }
                else
                {
                    system("cls");
                    printf("\n\n\t\t\tAlert! SET 2 < SET 1");
                }
                break;
            case 3:
                break;
            default:
                system("cls");
                printf("\n\t\t\tAlert! Wrong Selection");
                break;
            }
        }
        printf("\n\n\n\n\n");
        return 0;
    }
}
