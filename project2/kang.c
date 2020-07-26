#include <stdio.h>
int main(void) {
	int x1,x2,v1,v2,i;
    printf("enter the 1st location : \n");
	scanf("%d",&x1);
	printf("enter the rate of movement for first location : \n");
	scanf("%d",&v1);
	printf("enter the 2nd location : \n");
	scanf("%d",&x2);
	printf("enter the rate of movement for 2nd location : \n");
	scanf("%d",&v2);
	if(v1>v2)
	{
	    if(x1>x2)
            printf("NO");
        else{
            if((x2-x1)%(v1-v2)==0)
                printf("YES");
            else
                printf("NO");
        }
	}
    else if (v2>v1){
        if(x2>x1)
            printf("NO");
        else{
            if((x1-x2)%(v2-v1)==0){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
    }
	
	return 0;
}
