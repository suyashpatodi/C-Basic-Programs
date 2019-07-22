#include<stdio.h>
int main()
{
	int n,num=0,digit;
	printf("Enter Number:");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%8;
		num=num*10+digit;
		n=n/10;
	}
	while(num>0)
	{
		printf("%d",num%10);
		num=num/10;
	}
	return 0;
}
