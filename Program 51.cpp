#include<stdio.h>
struct Point{
	int x;
	int y;
};
int main()
{
	struct Point p1={10,20};
	struct Point p2=p1;
	if(p1.x==p2.x && p1.y==p2.y)
		printf("Same");
	else
		printf("Different");
	return 0;
}
