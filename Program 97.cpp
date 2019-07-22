#include<stdio.h>
void loop(int a)
{
	if(a<=100)
	{
		printf("%d\n",a);
		loop(a+1);
	}
}
int main()
{
	int a=1;
	loop(a);
	return 0;
}
