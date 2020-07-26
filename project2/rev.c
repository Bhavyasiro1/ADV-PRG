#include <stdio.h>
int main(void)
{
	int T,i;
	printf("enter the number of test cases :");
	scanf("%d",&T);
	int n,k,j;
	for(i=0;i<T;i++)
	{
		printf("number of terms : ");
	    scanf("%d",&n);
	    printf("index of a given number : \n");
	    scanf("%d",&k);
	    int a[n],b[n];
	    for(j=0;j<n;j++)
	    {
	        a[j]=j;
	    }
	    for(j=0;j<n;j++)
	    {
	        if(j==0)
	        {
	            a[j]=n-1;
	        }
	        else if(j%2!=0)
	        {
	            a[j]=n-1-a[j-1];
	        }
	        else
	        {
	            a[j]=n-2-a[j-1];
	        }
	    }
	    for(j=0;j<n;j++)
	    {
	        if(a[j]==k)
	        {
	            printf("%d\n",j);
	            break;
	        }
	    }
	}
	return 0;
}

