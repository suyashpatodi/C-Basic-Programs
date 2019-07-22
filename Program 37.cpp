#include<stdio.h>
int main()
{
	double n,sum=0.0,i;
	printf("Enter Number:");
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1)
		printf("1+");
		else if(i==n)
		printf("1/%lf =",n);
		else
		printf("1/%lf +",i);
		sum=sum+(1/i);
	}
printf("%lf",sum);
return 0;
}
