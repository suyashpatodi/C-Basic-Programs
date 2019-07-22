#include<stdio.h>
int main()
{
	union demo{
		int x;
		float y;
	};
	union demo a;
	printf("Enter x:");
	scanf("%d",&a.x);
	printf("\nValue x before entering y:%d",a.x);
	printf("\nEnter y:");
	scanf("%f",&a.y);
	printf("\nValue of y:%f",a.y);
	printf("\nValue x after entering y:%d",a.x);
	printf("\nEnter x:");
	scanf("%d",&a.x);
	printf("Final x=%d and y=%f",a.x,a.y);
	
}
