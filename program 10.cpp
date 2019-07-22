#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter Number:");
	scanf("%d %d",&a , &b);
	printf("Before: %d \t %d \t",a,b);
	int temp=a;
	a=b;
	b=temp;
	printf("After: %d \t %d \t",a,b);
	return 0;
}
