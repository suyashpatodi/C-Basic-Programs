#include<stdio.h>
int main()
{
	int num,sum=0,flag=0;
	printf("Enter Number:");
	scanf("%d",&num);
	if(num>=0)
	{
	for(int i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(num==sum)
		flag=1;
	}
	if(flag==1)
	printf("Perfect Number:");
	else
	printf("Not Perfect Number:");
}
