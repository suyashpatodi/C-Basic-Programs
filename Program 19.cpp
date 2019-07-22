#include<stdio.h>
int main()
{
	int a[10],i,search,n;
	printf("Enter Number of Array Elemnts:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter Element you want to search:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
		{
			if (a[i]==search)
				{
					printf("Element found at position:%d",i+1);
					break;
				}
		}
	if(i==n)
		printf("Not Found");
	return 0;
	
}
