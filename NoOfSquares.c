#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	int A1[t],A2[t],s,sum=0,r;
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&A1[i],&A2[i]);
	}
	for(i=0;i<t;i++)
	{
		do
		{
			s=A2[i]/A1[i];
			sum=sum+s;
			r=A2[i]%A1[i];
			A2[i]=A1[i];
			A1[i]=r;
		}while(r!=0);
		printf("%d\n",sum);
		sum=0;
	}
	
}
