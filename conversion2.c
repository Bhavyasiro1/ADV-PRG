#include<stdio.h>
int main()
{
	int a[100],i=0,j;
	long x;
	scanf("%d",&x);
	while(x!=0)
	{
		a[i] = x%10;
		x/=10;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		switch(j)
		{
			case 0: printf("zero");
			break;
			case 1: printf("one");
			break;
			case 2: printf("two");
			break;
			case 3: printf("three");
			break;
			case 4: printf("four");
			break;
			case 5: printf("five");
			break;
			case 6: printf("six");
			break;
			case 7: printf("seven");
			break;
			case 8: printf("eight");
			break;
			case 9: printf("nine");
			break;
		}
	}
	return 0;
}
