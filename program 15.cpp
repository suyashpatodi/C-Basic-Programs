#include<stdio.h>
int linear(int a[],int size, int search);
int main()
{
	int a[10],i,search,n;
	printf("Enter Number of Array Elemnts:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter Element you want to search:");
	scanf("%d",&search);
	int pos=linear(a,n-1,search);
	if(pos==-1)
		printf("Not found");
		else
	printf("Element found at position:%d",pos+1);
	return 0;
}
int linear(int a[], int s, int search)
{
	if(a[s]==search)
		return s;
	else if (s==-1)
		return -1;
	else
		return linear(a,s-1,search);			
}
