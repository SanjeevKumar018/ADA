#include<stdio.h>
#include<conio.h>
void print(int n)
{
    int x=0,a[40][40];

    for(int i=0;i<n/4;i++){
        for(int j=0;j<n/4;j++){
            for(int k=0;k<4;k++){
                for(int l=0;l<4;l++){
                    a[i*4 + k][j*4 + l] = x;
                    x++;
                }
            }
        }
    }
    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
           printf("%d    ",a[k][l]);
        }
        printf("\n");
    }
}

void main()
{
    int n;
    printf("\nenter n value: ");
    scanf("%d",&n);
    print(n);
    getch();
}
