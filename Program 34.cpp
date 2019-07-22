#include<stdio.h>
void transpose(int a[][10],int r, int c)
{
	int trans[10][10];
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			trans[i][j]=a[j][i];
		}
	}
	printf("First Array:\n");
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Transpose:\n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}

}
int main()
{	
	int a[10][10],r,c;
	printf("Enter rows and column:");
	scanf("%d %d",&r,&c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	transpose(a,r,c);
	
	return 0;
}
