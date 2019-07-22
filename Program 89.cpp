#include<stdio.h>

 int fact(int n)
	{
		if(n==1 || n==0)
		return 1;
		else
		return (n*fact(n-1));
	}
	int main()
{
	int num,f=0;
	printf("Enter Number:");
	scanf("%d",&num);
	int n=num;
	while(num>0)
	{
		f=f+fact(num%10);
		num=num/10;
	}
	if(f==n)
	printf("Strong:");
	else
	printf("Not a Strong Number");
	return 0;
}
