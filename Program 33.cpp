#include<stdio.h>
int maxi(int n[],int size)
{
	int max=n[0];
	for(int i=1;i<size;i++)
		{
			if(max<n[i])
				max=n[i];
		}
		return max;
}
int main()
{
	int a[]={15,12,34,2,67,54};
	int size=sizeof(a)/sizeof(int);
	int max=maxi(a,size-1);
	printf("%d",max);
	return 0;
}
