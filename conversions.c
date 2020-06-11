#include<stdio.h>
int main()
{
	int a[100],i=0,j;
	long x;
	scanf("%ld",&x);
	while(x!=0)
	{
		a[i]=x%10;
		x/=10;
		i+=1;
	}
	for(j=i-1;j>=0;j--)
	{
		if(j==0||j==i-1)
		{
			printf("%d",a[j]);
		}
		else if(a[j-1]%2==0 && a[j+1]%2==0)
		{
			printf("%d",a[j]);
		}
	}
	return 0;
}
