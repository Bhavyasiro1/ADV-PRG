#include<stdio.h>
int main()
{
    int i,j;
    char name[1][10];
    printf("enter name");
    scanf("%s",&name);
   //in this it will take six spaces in which ur name is allocated in this output u can see two spaces before abcd
    printf("%6s",name);//right justified
    printf("\n");
    printf("%-6s",name);//left justified
    printf("hello");
}
