#include<stdio.h>
int main()
{
	int i,j,z,low,top,a[10][10],n=1,s=1;
	scanf("%d",&z);
	low=0;
	top=z-1;
	for(i=0;i<z;i++,low++,top--)
	{
		for(j=low;j<=top;j++,n++){
			a[i][j]=n;
			if(n%11==0)
				s++;}
		for(j=low+1;j<=top;j++,n++)
			{a[j][top]=n;
			if(n%11==0)
				s++;}
		for(j=top-1;j>=low;j--,n++)
			{a[top][j]=n;
			if(n%11==0)
				s++;}
		for(j=top-1;j>low;j--,n++)
			{a[j][low]=n;
			if(n%11==0)
				s++;}
	}
	for(i=0;i<z;i++)
	{
		for(j=0;j<z;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	
	if(z>0)
	printf("Total power points:%d\n(0,0)\n",s);
	low=0;
	top=z-1;
	for(i=0;i<z;i++,low++,top--)
	{
		for(j=low;j<=top;j++,n++)
			if((a[i][j])%11==0)
				printf("(%d,%d)\n",i,j);
		for(j=low+1;j<=top;j++,n++)
			if((a[j][top])%11==0)
				printf("(%d,%d)\n",j,top);
		for(j=top-1;j>=low;j--,n++)
			if((a[top][j])%11==0)
				printf("(%d,%d)\n",top,j);
		for(j=top-1;j>low;j--,n++)
			if((a[j][low])%11==0)
				printf("(%d,%d)\n",j,low);
	}	
}
