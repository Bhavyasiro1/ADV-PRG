/*Read the value n as input and according to read the values n*n for the 2D array. Print the sum of items which is not present on the edges of the grid.*/
#include<stdio.h>
int main()
{
	int n,a[10][10],sum=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=0 && i!=n-1 && j!=0 && j!=n-1)
            {
                sum=sum+a[i][j]; 
            }

		}
	}
	printf("%d",sum);
}
