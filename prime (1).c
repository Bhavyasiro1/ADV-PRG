#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
		if(n%i==0)
		{
		
		count++;
		break;
	}
	if(count==0)
	printf("%d is a prime number",n);
	else
	printf("not a prime number");
}
