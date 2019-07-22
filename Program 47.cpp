#include<stdio.h>
struct student{
	int sno;
	char sname[20];
	float marks;
};
int main()
{
	int n,sum=0;
	float avg=0;
	printf("Enter Number of Students:");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++)
	{
		s[i].sno=i+1;
		printf("\nEnter Name:");
		scanf("%s",s[i].sname);
		printf("\nEnter Marks:");
		scanf("%f",&s[i].marks);
		sum=sum+s[i].marks;
	}
	avg=sum/n;
	for(int j=0;j<n;j++)
	{
		if(s[j].marks>=avg)
			printf("%s",s[j].sname);
	}
	return 0;
}
