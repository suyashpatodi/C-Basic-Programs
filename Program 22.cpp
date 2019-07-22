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
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After Sorting:");
		for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
