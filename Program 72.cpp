#include<stdio.h>
int main()
{
	int a[3][3],b[3][3];
	printf("Enter Element of First Matrix:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Element of Second Matrix:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Sum:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",(a[i][j]-b[i][j]));
		}
		printf("\n");
	}
}
