#include<stdio.h>

int fact(int n)
{
	if (n==0 || n==1)
		return 1;
		else
		return (n*fact(n-1));
}
int main()
{
	int n;
	printf("Enter Number of term:");
	scanf("%d", &n);
		printf("%d \n",fact(n));
		return 0;
}
