#include<stdio.h>
int main()
{
	int i,n,count=0,count1=0,m;
	printf("enter n and m:");
	scanf("%d %d",&n,&m);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		count++;
		break;
	    }
	    if(m%i==0)
	    {
	    count1++;
	    break;
		}
	}
	if(count==0 && count1==0)
	{
		if(n-m||m-n==2)
		{
			printf("Twin Primes");
		}
		else
	    printf("Not Twin-Primes");
	}
	else
	printf("Not Twin-Primes");
}
