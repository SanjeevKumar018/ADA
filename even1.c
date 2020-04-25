#include<stdio.h>
int countOne(int n) 
{ 
    int count = 0; 
    while (n > 0)  
    { 
        n = n & (n - 1); 
        count++; 
    } 
  
    if (count % 2 == 0) 
        return 1; 
    else
        return 0; 
} 
int sumDigits(int n) 
{ 
    int sum = 0; 
    while (n != 0)  
    { 
        sum += n % 10; 
        n /= 10; 
    } 
  
    return sum; 
} 
void main(){
   int n, total_sum = 0;
   printf("Enter the no of elements in array");
    scanf("%d",&n);
    int arr[n]; 
    for (int i = 0; i < n; i++) 
    { 
        if (countOne(arr[i]) == 1) 
            total_sum += sumDigits(arr[i]); 
    } 
    printf(total_sum); 
} 
