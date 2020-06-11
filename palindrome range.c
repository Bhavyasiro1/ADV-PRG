//read the two numbers as input and print the output as the count of palindrome numbers btw them
#include<stdio.h>
int isPalindrome(int a){
	int res=0,buffer=a,r;
while(a!=0)
	{
		r=a%10;
		res=res*10+r;
		a=a/10;
	}
	if(buffer==res){
		return 1;
	}
	return 0;
		
}
int main()
{
	int resu,count=0,m,n,i;
	
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
	resu=isPalindrome(i);
	
	if(resu==1)
	{
		count++;
	}
}
printf("%d",count);
return 0;
}
