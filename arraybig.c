#include<stdio.h>
int main()
{
	int arr[50];
	int i,big,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	big=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>big)
		{
			big=arr[i];
		}
	}
	printf("%d",big);
}
