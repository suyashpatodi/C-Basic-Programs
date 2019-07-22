#include<stdio.h>
int pow(int n,int r)
{
	if(r==0)
	return 1;
	else if(r==1)
	return n;
	else
	return n*pow(n,r-1);
}
int main()
{
	int n,count=0,digit,sum=0;
	printf("Enter Number:");
	scanf("%d",&n);
	int m=n,num=n;
	while(m>0)
	{
		count++;
		m=m/10;
	}
	while(n>0)
	{
		digit=n%10;
		sum=sum+pow(digit,count);
		n=n/10;
	}
	if(num==sum)
	printf("Armstrong:");
	else
	printf("Not a Armstrong:");
	return 0;
}
