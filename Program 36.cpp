#include<stdio.h>
#include<string.h>
int string_length(char *s) {
   int c = 0;
   
   while(*s != '\0')
      {
	  s++;
      c++;
}
     
   return c;
}
int main()
{
	char source[100];
	gets(source);
	int count=string_length(source);
	printf("Length:%s",count);
	return 0;
}
