#include<stdio.h>

int main()
{
	int n,m,n1,m1;
	printf("Enter Dimensions of First Array:");
	scanf("%d%d",&n,&m);
	printf("Enter Dimensions of Second Array:");
	scanf("%d%d",&n1,&m1);
	if(m!=n1)
	printf("Not Compatible:");
	else
	{	
	int first[n][m],second[n1][m1];
	printf("Enter Elements of array 1:");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&first[i][j]);
		}
	}
		printf("Enter Elements of array 2:");
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m1;j++)
		{
			scanf("%d",&second[i][j]);
		}
	}
	int c[n][m1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[i][j]=0;
			for(int k=0;k<n1;k++)
			{
				c[i][j]=c[i][j]+first[i][k]*second[k][j];
			}
		}
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m1;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}

	}
	return 0;
}
