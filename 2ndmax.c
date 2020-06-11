#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int max1,max2;
	if(a[0]<a[1])
	{
		max1=a[1];
		max2=a[0];
	}
	else
	{
		max1=a[0];
		max2=a[1];
	}
	for(i=2;i<5;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2 && a[i]!=max1)
		{
			max2=a[i];
		}
	}
	printf("%d",max2);
}

