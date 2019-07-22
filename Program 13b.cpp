#include<stdio.h>
int main()
{
	int rows,num=1;
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++)
	{
		for(int space=0;space<rows-i;space++)
			printf(" ");
			
	for(int j=1;j<=i;j++)
	{
			printf(" *");
}
		printf("\n");
	}
	return 0;
}

