#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		sum=sum+i*i*i;
	}
	printf("Sum of squares:%d",sum);
}
