// Read the input as a number and print the output as reverse of the number
#include<stdio.h>
int main(){
	int x,r,res=0;
	scanf("%d",&x);
	while(x!=0)
	{
		r=x%10;
		res=res*10+r;
		x=x/10;
	}
	printf("%d",res);
	return 0;
}
