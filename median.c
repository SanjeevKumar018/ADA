#include<stdio.h> 
#include<conio.h>
int getMedian(int ar1[], int ar2[], int n) 
{ 
    int i = 0; 
    int j = 0; 
    int count; 
    int m1 = -1, m2 = -1; 
 
    for (count = 0; count <= n; count++) 
    { 
        if (i == n) 
        { 
            m1 = m2; 
            m2 = ar2[0]; 
            break; 
        } 
        else if (j == n) 
        { 
            m1 = m2; 
            m2 = ar1[0]; 
            break; 
        } 
  
        if (ar1[i] < ar2[j]) 
        { 
            m1 = m2;  
            m2 = ar1[i]; 
            i++; 
        } 
        else
        { 
            m1 = m2;
            m2 = ar2[j]; 
            j++; 
        } 
    } 
  
    return (m1 + m2)/2; 
} 

void main() 
{ 
    int ar1[20] , ar2 [20] , n; 
    
    printf("Enter size of Arrays: ");
    scanf("%d",&n);
    
    printf("\nEnter elements of array 1: ");
    for(int i=0;i<n;i++)
      scanf("%d",&ar1[i]) 
      
    printf("\nEnter elements of array 2: ");
    for(int i=0;i<n;i++)
      scanf("%d",&ar2[i]);
      
    printf("\nMeddian of two Arrays : %d", getMedian(ar1,ar2,n); 
    
    getch(); 
} 
