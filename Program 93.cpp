#include<stdio.h>
int main()
{
	int rows,num=1;
	printf("Enter Number of Rows:");
	scanf("%d",&rows);
	for(int i=0;i<rows;i++)
	{
		for(int k=0;k<=i;k++)
		{
			printf("%4d",num);
			num++;
		}
		printf("\n");
	}
	return 0;	
}

