#include<stdio.h>
int main()
{
	int z,i,low,top,a[10][10],n=1,j;
	scanf("%d",&z);
	low=0; //start index
	top=z-1; //last index
	for(i=z-1;i>=0;i--,low++,top--)
	{
		for(j=low;j<=top;j++,n++)
			a[i][j]=n;
		for(j=top-1;j>=low;j--,n++)
			a[j][top]=n;
		for(j=top-1;j>=low;j--,n++)
			a[low][j]=n;
		for(j=low+1;j<top;j++,n++)
			a[j][low]=n;
	}
	for(i=0;i<z;i++)
	{
		for(j=0;j<z;j++)
		{
			printf("%d ",a[i][j]);	
		}
		printf("\n");
	}	
}
