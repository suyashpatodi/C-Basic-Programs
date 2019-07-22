#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	gets(ch);
	
	for(int i=0;i<(strlen(ch)-1);i++)
	{
		int  min=i;
		for(int j=i+1;j<strlen(ch);j++)
		{
			if(ch[j]<ch[min])
			{
				min=j;
			}
		}
		if(c[min]!=ch[i]);
		{
			int temp=ch[i];
			ch[i]=ch[min];
			ch[min]=temp;
		}
	}		
		for(int j=0;j<strlen(ch);j++)
		printf("%c\n",ch[j]);	
	
		
	return 0;
}
