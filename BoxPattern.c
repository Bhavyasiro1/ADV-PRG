/*Read the input as number N and Print the following format
Boundary Conditions:
1 <= N <= 20
N will be always an odd number	*/
#include<stdio.h>
int main()
{
	int n,a[10][10],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=0 && i!=n-1 && j!=0 && j!=n-1)
            {
                printf(" ");
            }
			else
			printf("*");
		}
		printf("\n");
	}	
}
