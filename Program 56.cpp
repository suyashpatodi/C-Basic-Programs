#include<stdio.h>
int main()
{
	FILE *p,*q;
	p=fopen("abc.txt","r");
	int space=0,line=0,charac=0;
	if(p==NULL)
	{
		printf("No File Found");
	}
	else
	{
		int i=0;
		while(!feof(p))
		{
		char ch=getc(p);
		if(ch==" ")
			line++;
		else if(ch==" ")
		{
			space++;
		}
		else
			charac++;
		}	
		}
	fclose(p);
	return 0;
	
}
