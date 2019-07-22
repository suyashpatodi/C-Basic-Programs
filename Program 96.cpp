#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter Number:");
	scanf("%d %d",&x,&y);
	while(y!=0)
	{
		int carry=(~x)&y;
		x=x^y;
		y=carry<<1;
	}
	printf("%d",x);
	return 0;
}
