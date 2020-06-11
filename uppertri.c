#include <stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter elements into the matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("upper triangle elemnts:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    if(i<j)
    printf("%d",a[i][j]);
}
