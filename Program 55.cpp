
#include<stdio.h>
int main()
{
	FILE *p,*q;
	p=fopen("abc.txt","r");
	q=fopen("bcd.txt","w");
	if(p==NULL)
	{
		printf("No File Found");
	}
	else
	{
		while(!feof(p))
		{
		char ch=getc(p);
		printf("%c",ch);
		putc(ch,q);
		}
	}
	fclose(p);
	fclose(q);
	return 0;
	
}
