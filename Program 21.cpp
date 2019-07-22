#include<stdio.h>
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
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==search)
			{
				printf("Element found at position:%d",mid+1);
				flag=0;
					break;
			}
		else if(a[mid]>search)
			{
					h=mid-1;
				
			}
			else
			{
				l=mid+1;
			}
	}
	if(flag==1)
		printf("Not Found");
	return 0;
	
}
