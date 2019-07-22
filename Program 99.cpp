#include<stdio.h>
int main()
{
		int n,num=0,digit=0;
	printf("Enter Number:");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		num=num*10+digit;
		n=n/10;
	}
	printf("%d",num);
	while(num>0)
	{
		switch(num%10)
		{
			case 0:{
				printf("Zero\t");
				break;
			}
				case 1:{
				printf("One\t");
				break;
			}
				case 2:{
				printf("Two\t");
				break;
			}
				case 3:{
				printf("Three\t");
				break;
			}
				case 4:{
				printf("Four\t");
				break;
			}
				case 5:{
				printf("Five\t");
				break;
			}
				case 6:{
				printf("Six\t");
				break;
			}
				case 7:{
				printf("Seven\t");
				break;
			}
				case 8:{
				printf("Eight\t");
				break;
			}
				case 9:{
				printf("Nine\t");
				break;
			}
		}
		num=num/10;
	}
	return 0;
}
