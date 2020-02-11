#include<stdio.h>

int gcd(int a,int b)
{	if(a==0)
	return b;

		else if(b==0)
		return a;

		else 
return gcd(b,a%b);
}

int main(){
int x,y;


printf("enter the two numbers");
scanf("%d %d",&x,&y);
printf("gcd of two number is %d",gcd(x,y));
return 0;
}

