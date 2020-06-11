#include <stdio.h>
int main()
{
    int a[5],max2=0,max1;
    max1=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];   
        }
        else
        {
            if(max2<a[i])
            {
                max2=a[i];
            }
        }
    }
    printf("%d ",max2);    
}

