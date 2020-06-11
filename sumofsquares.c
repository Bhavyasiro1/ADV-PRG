#include<stdio.h>
int main()
{
	int n,sum;
	printf("enter n value");
	scanf("%d",&n);
	sum=n*(n+1)*(2*n+1)/6;
	//for(i=1;i<=n;i++)
	//{	
	//	sum=sum+i*i;
	//}
	printf("Sum of squares:%d",sum);
}
