#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int flag=1;
printf("Enter String::::");
gets(str);
for(int i=0;i<strlen(str);i++)
{
	if(str[i]!=str[strlen(str)-i-1])
	{
		flag=0; 
		break;
	}
}
if(flag==0)
	printf("Not Palindrome");
	else
	printf("Palindrome:");
}
