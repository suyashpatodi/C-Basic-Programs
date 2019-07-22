#include<stdio.h>
int stack[100],top=0,choice,n;
void pop();
void push();
void display();

int main()
{
	top=-1;
	printf("Enter Size Of Array Stack:");
	scanf("%d",&n);
	do{
		printf("\nEnter Your Choice:\n1.Push Element\n2.Pop Element\n3.Display Element\n4.Exit Press 0\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{
				push();
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			default: {
				printf("Invalid Input:");
				break;
			}
		}
	}while(choice!=0);
}
void push()
{
	if(top>=n-1)
		printf("Stack Overflow");
	else
		{
			int x;
			printf("Enter Data:");
			scanf("%d",&x);
			top++;
			stack[top]=x;	
		}
}
void pop()
{
	if(top<0)
		printf("\nStack Underflow:");
	else
	{
		printf("\nPopped element is:%d",stack[top]);
		top--;
	}
}
void display()
{
	if(top<0)
		printf("\nEmpty Stack");
	else
	{
		for(int i=top;i>=0;i--)
			printf("%d\t",stack[i]);
	}
}
