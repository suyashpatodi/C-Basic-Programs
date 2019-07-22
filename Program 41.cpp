#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	if((strcmp(a,b))==0)
	printf("Identical");
	else
	printf("Not Identical");
	return 0;
}
