#include<iostream>

int swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int x,y;
	printf("Enter Numbers:");
	scanf("%d %d",&x,&y);
	printf("Before Swapping:%d \tand %d",x,y);
	swap(&x,&y);
	printf("\nAfter Swapping:%d \t %d",x,y);
	return 0;
}
