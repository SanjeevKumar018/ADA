#include<stdio.h>


#define max 5
#define Max 20

int ar[max];

int find(int size,int key)
{
	int arr[Max],f=0;
	
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		if(key==arr[i])
			f=1;
	}
	
	if(f==1)
		return 1;
	else 
		return -1;
}

int main()
{
	int test,size,key,i;

	scanf("%d",&test);
	
	for(i=0;i<test;i++)
	{
		scanf("%d %d",&size,&key);
		
		ar[i]=find(size,key);
	}
	
	for(i=0;i<test;i++)
	{
		printf("%d\n",ar[i]);
	}

return 0;
}

