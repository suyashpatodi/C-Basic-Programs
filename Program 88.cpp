#include<stdio.h>
int main()
{
	int a[6]={4,3,7,2,1,9};
	for(int i=1;i<6;i++)
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
		printf("Smallest Element:%d",a[0]);
	printf("Largest Element:%d",a[5]);
	return 0;
}
