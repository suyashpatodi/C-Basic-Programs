#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* link;
}*top,*top1,*temp;
void pop();
void push(int);
void display();

int choice,count=0;
int main()
{
	top=NULL;
	do{
		printf("\nEnter Your Choice:\n1.Push Element\n2.Pop Element\n3.Display Element\n4.Exit Press 0\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{
				int n;
				printf("Enter Data:");
				scanf("%d",&n);
				push(n);
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
void push(int n)
{
	if(top==NULL)
	{
		top=(struct node*)malloc(sizeof(struct node));
		top->data=n;
		top->link=NULL;
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=n;
		temp->link=top;
		top=temp;
	}	
	count++;
}
void pop()
{
	top1=top;
	if(top==NULL)
		printf("Stack Empty:");
	else
	{
		top1=top1->link;
		printf("Popped element is:%d",top->data);
		free(top);
		top=top1;
	}
	count--;
}
void display()
{
	top1=top;
	if(top1==NULL)
	{
		printf("\nEmpty");
	}
	else
	{
		while(top1!=NULL)
			{
				printf("%d->",top1->data);
				top1=top1->link;
			}
	}
}
