#include<stdio.h>
int main()
{
	int i,n,m,hcf;
	printf("enter n and m:");
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		if(n%i==0 && m%i==0)
        hcf=i;
	}
	if(hcf==1)
	{
		printf("%d and %d are Co-Primes",n,m);
	}
	else
	{
		printf("%d and %d are not Co-Primes",n,m);
	}
}
