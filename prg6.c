#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char name[10]="sakshi";
    //printf("%s%d",name,strlen(name));other method 
    for(i=0;name[i]!='\0';i++)
    count++;
    printf("%d",count);
}
