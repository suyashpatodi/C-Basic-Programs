#include<stdio.h>
int binary (int a[],int l,int h, int search);
int main()
{
	int a[10],i,search,l,h,mid,n,flag=1;
	printf("Enter Number of Array Elemnts:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Enter Element you want to search:");
	scanf("%d",&search);
	
	l=0;
	h=n-1;
	
	int pos=binary(a,l,h,search);
	if(pos==-1)
		printf("Not Found");
	else		
		printf("Element found at position:%d",pos+1);
return 0;
}

int binary (int a[],int l,int h, int search)
{
		int mid=(l+h)/2;
		if(l>h)
			return -1;
		
		else if(a[mid]==search)
			{
				return mid;
			}
		else if(a[mid]>search)
			{
				return binary(a,mid+1,h,search);
			}
		else
			{
				return binary(a,l,mid-1,search);
			}	
}
