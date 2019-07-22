#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	if(m>=60)
		printf("FIRST");
	else if(m>=50 && m<60)
			printf("Second");
				else if(m>=40 && m<50)
			printf("Third");
			else
				printf("Failed");

}
