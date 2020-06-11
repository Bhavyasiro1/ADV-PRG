#include<stdio.h>
int palindrome(int j)
{
	int sum=0,i,k;
	k=j;
	while(j!=0)
	{
		i=j%10;
		sum=sum *10+i;
		j=j/10;
	}
	if(k==sum)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int main()
{
	int a[100],n,i,r=0,k=0;
	printf("enter number of values");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		k=palindrome(a[i]);
		if(k==1)
		{
			r++;
		}
	}
	printf("%d",r);
}


