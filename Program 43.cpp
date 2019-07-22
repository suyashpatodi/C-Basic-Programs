#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	gets(ch);
	int c[100];

	for(int i=0;i<strlen(ch);i++)
		c[i]=ch[i];
	
	for(int i=0;i<(strlen(ch)-1);i++)
	{
		int  min=i;
		for(int j=i+1;j<strlen(ch);j++)
		{
			if(c[j]<c[min])
			{
				min=j;
			}
		}
		if(c[min]!=c[i]);
		{
			int temp=c[i];
			c[i]=c[min];
			c[min]=temp;
		}
	}	
		for(int j=0;j<strlen(ch);j++)
		printf("%c\n",c[j]);	
	
		
	return 0;
}
