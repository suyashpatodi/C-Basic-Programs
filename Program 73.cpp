#include<stdio.h>
int main()
{
	int m,n,q,p;
	printf("Enter m and n and p and q:");
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&p);
	scanf("%d",&q);
	int a[m][n],b[p][q],c[m][q];
	printf("Enter Element of First Matrix:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
				printf("\na:",a[m][n]);
		}
	}
	printf("Enter Element of Second Matrix:\n");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
				printf("\nb:",b[m][n]);
		}
	}
		for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
				printf("\nb:",b[m][n]);
		}
	}
	printf("Sum:\n");
	if(n==p){
	for(int i=0;i<m;i++)
	{
		int sum=0;
		for(int j=0;j<q;j++)
		{
			for(int k=0;k<n;k++)
			{
				printf("\na:",a[m][n]);
								printf("\nb:",b[m][n]);
				sum=sum+a[m][n]*b[n][q];
			}
			printf("%d\t",sum);
		}
		printf("\n");
	}
}
else
{
	printf("Not compatible");
}
}
