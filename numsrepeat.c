#include<stdio.h>
int main()
{
	int n,a[100],i,j,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			c++;
		}
		if(c==2)
		printf("%d",a[i]);
	}
	
	
}

