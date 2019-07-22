#include<stdio.h>
int main()
{
	int n,a[10],min ,max;
	printf("Enter Elements:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(int j=0;j<=n-1;j++)
	{
		if(a[j]<min)
		{
			min=a[j];
		}
		else if (a[j]>max)
		{
			max=a[j];
		}
	}
		printf("Max: %d and Min: %d",max,min);
	return 0;
}
