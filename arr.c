#include<stdio.h>
int main()
{
	int arr[50];
	int i,sum=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("%d",sum);
}
