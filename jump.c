#include<stdio.h>
#include<conio.h>

int fib[30],l;

int fibarr(int n)
{
    int i=2,a,b=1,f=2;
    fib[0]=1;
    fib[1]=2;
    while(1)
    {
        a=b;
        b=f;
        f=a+b;
        if(f>n)
            break;
        fib[i]=f;
        i++;
    }
    l=i;
}

void main()
{
    int n,a[50],k=-1,ptr,j,count=0;
    printf("Enter size: ");
    scanf("%d",&n);

    fibarr(n);

    printf("\nEnter values such that last value is 1: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    j=l-1;

    while(k<n-1)
    {
        if(j==-1)
        {
            if(count)
                printf("\nIt is not possible to jump further");
            else
                printf("\nIt is not possible to reach final stage");
            break;
        }
        ptr=k+fib[j];
        if(!a[ptr] || ptr>n-1)
        {
            j--;
            continue;
        }
        else
        {
            printf("\n%d jump %d steps from %d to index %d",count+1,fib[j],k,ptr);
            k=ptr;
            count++;
            j=l-1;
        }
    }

    if(j!=-1)
        printf("\nTotal jumps to reach final stage: %d",count);

    getch();
}
