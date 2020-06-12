/*Print max element of an array*/
#include<stdio.h>
int main()
{
	int n,m,a[10][10],i,j,max;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	max=a[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	printf("Max : %d",max);
}
	
