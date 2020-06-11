#include<stdio.h>
int main()
{
	int n,r;
	scanf("%d",&n);
	r=n%8;
	switch(r)
	{
		case 1: printf("%dLB",n+3);
		break;
		case 2: printf("%dMB",n+3);
		break;
		case 3: printf("%dUB",n+3);
		break;
		case 4: printf("%dLB",n-3);
		break;
		case 5: printf("%dMB",n-3);
		break;
		case 6: printf("%dUB",n-3);
		break;
		case 7: printf("%dSU",n+1);
		break;
		case 0: printf("%dSL",n-1);
		break;
	}
	return 0;
}
