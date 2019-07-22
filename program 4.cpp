#include<stdio.h>

int main()
{
	int n,z1=0,z2=1,sum=0,i=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{	printf("%d \t",z1);
		sum=z1+z2;
		z1=z2;
		z2=sum;
	}
}
