#include<stdio.h>

int main()
{
	int n,a[10];
	printf("Enter Elements:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if (a[min]!=a[i])
		{
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}
