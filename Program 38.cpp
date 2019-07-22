#include<stdio.h>
int fact(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int n,r,num;
	printf("Enter n and r:");
	scanf("%d %d",&n,&r);
	num=fact(n)/(fact(n-r)*fact(r));
	printf("%d",num);
	return 0;
}
