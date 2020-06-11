#include<stdio.h>
int main()
{
    int i,j;
    char name[1][10];
    printf("enter name");
    for(i=0;i<1;i++)
    for(j=0;j<10;j++)
    scanf("%c",&name[i][j]);
    printf("%s",name);
}
