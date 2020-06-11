#include <stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter elements into the matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("off diagonal sum:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    if(i==j || i+j==2)
    sum = sum+a[i][j];
    printf("%d",sum);
}
 
