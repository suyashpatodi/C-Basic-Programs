#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a and b:%d %d",a,b);
	return 0;
}
