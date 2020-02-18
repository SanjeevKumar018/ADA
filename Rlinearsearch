#include<stdio.h> 
  

int recSearch(int arr[], int l, int r, int x) 
{ 
     if (r < l) 
        return -1; 
     if (arr[l] == x) 
        return l; 
     if (arr[r] == x) 
        return r; 
     return recSearch(arr, l+1, r-1, x); 
} 
  
int main() 
{ 

    int n,x;
    printf("enter no of elements & key to be searched\n");
    scanf("%d %d",&n,&x);
    int arr[n]; 
    printf("Enter array elements\n");
    for(int i =0;i<n;i++)
    scanf("%d",&arr[i]);
    int index = recSearch(arr, 0, n-1, x); 
    if (index != -1) 
       printf("Element %d is present at index %d", x, index); 
    else
        printf("Element %d is not present", x); 
    return 0; 
} 
