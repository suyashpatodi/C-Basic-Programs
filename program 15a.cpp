#include<stdio.h>
#include<string.h>

int main()
{
	char str1[]="suyash",str2[]="bcd";
	//gets(str1);
//	gets(str2);
	int len1=strlen(str1);
	int len2=strlen(str2);
	int leng=len1+len2;
	char sfinal[leng];
	for(int i=0;i<len1;i++)
	{
		sfinal[i]=str1[i];
	}
	int pos,j=0;
	printf("Enter Position:");
	scanf("%d",&pos);
	for(int i=pos-1;i<(pos-1+len2);i++)
	{
		sfinal[i]=str2[j];
	//	printf("i:%d \ti+len2:",i,(i+len2));
		//sfinal[i+len2]=str1[j+pos];
		j++	;
	}
	for(int k=(pos-1+len2);k<(pos-1+len1);k++)
		{
			sfinal[k]
		}
	printf("\n%s",sfinal);
}
