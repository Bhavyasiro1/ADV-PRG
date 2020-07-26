#include  <stdio.h>
int calc(int x, int y) ;
int main()
{
int a,b;
    printf("Enter the number of rows of the  matrix : ");
	scanf("%d",&a);
	printf("Enter the number of columns of the matrix : ");
	scanf("%d",&b);
    printf("%d", calc(a,b));
	return 0;
}
int calc(int x, int y)
{
	if (x == 1 || y == 1)
    	{
        	return 1;
    	}
    	else
    	{
        	return calc(x - 1, y) + calc(x, y - 1);
    	}
}
