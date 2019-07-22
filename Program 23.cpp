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
	for(int i=1;i<n;i++)
	{
		int key=a[i];
		int j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}
