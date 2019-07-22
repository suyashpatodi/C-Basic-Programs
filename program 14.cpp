#include<stdio.h>
int gcd(int min, int max);
int main()
{
	int a,b,max,min;
	scanf("%d %d",&a,& b);
	if(a>b)
	{
		max=a;
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}
	printf("%d",gcd(max,min));
	return 0;
}
int gcd (int max, int min)
{
	if(max%min==0)
	return min;
	else
	{
		for(int i=min/2;i>1;i--)
			if(max%i==0)
			return i;
	}
}
