/*Read the input as n rows and n columns and Print the output as difference between the sum of diagonal elements
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[10][10],fsum=0,rsum=0,i,j;
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
			if(i==j){
				fsum+=a[i][j];
			}
			if(i+j==n-1){
				rsum+=a[i][j];
			}
		}
	}
	printf("%d",abs(fsum-rsum));
}
