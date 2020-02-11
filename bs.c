#include<stdio.h>
int main()
{
	int n,i,j,k,ele,l,h,mid,a[50],count,fpos,lpos;
	printf("Enter the number of elements in array and element to be searched\n");
	scanf("%d %d",&n,&ele);
	l = 0;
	h = n-1;
	printf("Enter the elements of array in sorted order!\n");
	for(j=1;j<=n;j++)
		scanf("%d",&a[j]);
	
{
	while(l<=h)
	{
		mid = (int)(l+h)/2;
		if(a[mid]==ele)
		{	
			i = mid;
			k = mid;			
			while(a[i]==ele)
			{			
				fpos = i;
				i--;
			}
			while(a[k]==ele)
			{
				lpos = k;
				k++;
			}
			printf("The first occurrence of the key is at %d and last occurrence is at %d\n",fpos,lpos);
			count = lpos-fpos+1;
			printf("The count is %d\n",count);		
			break;
		}
		else if(a[mid]<ele)
			l = mid+1;
		else 
			h = mid-1;
	}
}
	if(l>h)
		printf(" (Element is not present)\n");
	return 0;
}
