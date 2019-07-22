#include<stdio.h>
#include<string.h>
void copy (char *source,char *target)
{
	while(*source!='\0')
	//ya while(*source)
	{
		*target=*source;
		target++;
		source++;
	}
	*target='\0';
}
int main()
{
	char source[100],target[100];
	gets(source);
	copy(source,target);
	printf("Target:%s",target);
	return 0;
}
