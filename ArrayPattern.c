/*Read the input as m rows and n columns it means you need to read to m and n values and after that print the output as the following grid
*/
#include<stdio.h>
int main()
{
	int n,m,a[10][10],sum=0,i,j;
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=m+1;i++)
	{
		for(j=0;j<=n+1;j++)
		{
			if(i==0 || j==0 || i==(m+1) || j==(n+1)){
				printf("*");
			}
			else{
				printf("%d",a[i][j]);
			}
		}
		printf("\n");
	}
}

