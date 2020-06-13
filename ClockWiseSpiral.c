#include<stdio.h>
int main()
{
	int z,i,low,top,a[10][10],n=1,j;
	scanf("%d",&z);
	n=z*z;
	low=0; //start index
	top=z-1; //last index
	for(i=0;i<z;i++,low++,top--)
	{
		//First Row
		for(j=low;j<=top;j++,n--)
			a[i][j] = n;
		//Last Column
		for(j=low+1;j<=top;j++,n--)
			a[j][top]=n;
		//Last Row
		for(j=top-1;j>=low;j--,n--)
			a[top][j]=n;
		//First Col
		for(j=top-1;j>low;j--,n--)
			a[j][low]=n;
	}	
	for(i=0;i<z;i++)
	{
		for(j=0;j<z;j++)
			printf("%d ",a[i][j]);	
		printf("\n");
	}	
}
