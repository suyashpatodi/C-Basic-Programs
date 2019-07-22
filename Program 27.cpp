#include<stdio.h>
int main()
{
	int n,a[10][10],min ,max,m;
	printf("Enter Elements M and N:");
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			{
				printf("a[%d][%d]:",i,j);
				scanf("%d",&a[i][j]);
			}
	}
	min=a[0][0];
	max=a[0][0];
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	{
		if(a[i][j]<min)
		{
			min=a[i][j];
		}
		else if (a[i][j]>max)
		{
			max=a[i][j];
		}
	}
	}
		printf("Max: %d and Min: %d",max,min);
	return 0;
}
