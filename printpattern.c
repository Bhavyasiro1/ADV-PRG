#include<stdio.h>
int main()
{
	int r,i;
	long x;
	scanf("%d",&x);
	while(x!=0)
	{
		r=x%10;
		printf("|");
		for(i=0;i<r;i++)
		{
		printf("*");
	    }
		
	
	printf("\n");
	x=x/10;
    }
  return 0;
}
