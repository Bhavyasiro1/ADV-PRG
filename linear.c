#include<stdio.h>
int main()
{
	int a[10],i,k;
	printf("Enter key:");
	scanf("%d",&k);
	printf("Enter Elements:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]==k)
		{
		printf("Element Found");
		break;
	    }
		
		if(i==10)
		printf("Element is not found");
	}	
}
