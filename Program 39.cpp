#include<stdio.h>
int main()
{
	int a[10],n;
	printf("Enter Number:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int j=1,min=a[0];
	do{
		if(a[j]<min)
			min=a[j];
		j++;
	}while(j<n);
	printf("Minimum:%d",min);
	return 0;
}
