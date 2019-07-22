#include<stdio.h>
struct library{
	int acessno;
	char aname[20];
	char title[40];
	int year;
	char pname[20];
	float price;
};
int main()
{
	struct library l[5];
	for(int i=0;i<2;i++)
	{
		printf("Enter Acess Number:");
		scanf("%d",&l[i].acessno);
				printf("Enter Author Name:");
		scanf("%s",l[i].aname);
				printf("Enter Title Name:");
		scanf("%s",l[i].title);
				printf("Enter Publication Year:");
		scanf("%d",&l[i].year);
				printf("Enter Publication Name:");
		scanf("%s",l[i].pname);
				printf("Enter Price:");
		scanf("%f",&l[i].price);
	}
	for(int i=0;i<2;i++)
	{
		printf("\nAccess Number:%d",l[i].acessno);
		printf("\nAuthor Name:%s",l[i].aname);
		printf("\nTitle Name:%s",l[i].title);
		printf("\nPublication Year:%d",l[i].year);
		printf("\nPublication Name:%s",l[i].pname);
		printf("\nEnter Price:%f",l[i].price);
	}
}
