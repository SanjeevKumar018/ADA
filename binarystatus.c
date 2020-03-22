#include<stdio.h>
#include<conio.h>

int binarystatus(int x)         
{
    int a[50],i=0,c=0;

    while(x>1)         
    {
        a[i]=x%2;
        x=x/2;
        i++;
    }
    a[i]=x;     //i=0, 1         

    for(int j=0;j<=i;j++)
    {
        printf("%d ",a[j]);
        if(a[j])
            c++;                
    }
    printf("\n");

    if(c%2)
        return 0;               
    else
        return 1;
}

void main()
{
    int n,arr[20],sum=0;

    printf("Enter size: ");
    scanf("%d",&n);                     

    printf("\nEnter values: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);              
        if(binarystatus(arr[i]))
            sum+=arr[i];
    }

    printf("\nsum : %d",sum);

    getch();
}
