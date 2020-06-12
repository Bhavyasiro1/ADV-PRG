/*The program must accept an integer matrix of size MxN as the input. The program must print the desired pattern
*/
#include<stdio.h>
int main()
{
	int n,m,a[10][10],i,j,k;
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&k);
	for(i=k;i<m;i++)
	{
		for(j=k;j<n;j++)
		{
				printf("%d ",a[i][j]);

		}
		printf("\n");
	}
}
