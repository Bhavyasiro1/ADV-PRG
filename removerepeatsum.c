#include<stdio.h>
int main()
{ 
int c,sum=0,a[100],n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{ 
	c=0;
	for(j=0;j<n;j++)
	{ 
		if(j==i)
		continue;
		if(a[i]==a[j])
		c++;
	}
	if(c==0)
	sum+=a[i];
}
printf("%d",sum);
}

