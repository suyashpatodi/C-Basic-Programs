P#include<stdio.h>

void merge(int a[], int l, int m, int h)
{
	int i=l;
	int j=m+1;
	int k=0;
	int c[10];
	while(i<=m && j<=h)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			i++;
		}
		else 
		{
			c[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=m)
		{
			c[k]=a[i];
			i++;
			k++;
		}
		
	while(j<=h)
		{
			c[k]=a[j];
			j++;
			k++;
		}
	int low=0;
		for(i=l;i<=h;i++)
		{
		a[i]=c[low];
		low++;
}
}
void mergesort(int a[],int l, int h)
{	
	if(l<h)
	{
		int m=(l+h)/2;
	mergesort(a,l,m);	
	mergesort(a,m+1,h);
	merge(a,l,m,h);
}
}

int main()
{
	int n,a[10];
	printf("Enter Elements:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
