#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10],n;

    printf("Enter number of states: ");
    scanf("%d",&n);

    printf("\nEnter transition matrix: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j] = a[i][j] || (a[i][k] && a[k][j]);
            }
        }
    }

    printf("\nThe final warshall transition matrix is: \n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    getch();
}
