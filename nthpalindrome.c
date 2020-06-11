//Read the two lines of input where Line 1 represents the limits and Line 2 represents the nth Palindrome of the limits
#include<stdio.h>
int isPalindrome(int a)
{
	int rev=0,buffer=a;
	while(a!=0){
		rev=rev*10+(a%10);
		a/=10;
	}
	if(buffer==rev){
		return 1;
	}
	return 0;
}
int main()
{
	int x1,x2,i,n,count=0;
	scanf("%d%d",&x1,x2);
	scanf("%d",&n);
	for(i=x1;i<=x2;i++)
	{
		if (isPalindrome(i)){
			count++;
		}
		if(count==n){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
