#include<stdio.h>
int main()
{
	int rows;
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++)
	{
		for(int space=0;space<rows-i;space++)
			printf(" ");
			
	for(int j=1;j<=i;j++)
		printf("%2d",i);
		
		printf("\n");
	}
	return 0;
}
