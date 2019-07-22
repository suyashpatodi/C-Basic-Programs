#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
}*front,*rear,*front1,*temp;
int count=0,choice;
void insert(int);
void del();
void display();
void frontelement();
void countele();
int main()
{
	front=rear=NULL;
	do{
		printf("\nEnter Your Choice:\n1.Push Element\n2.Pop Element\n3.Display Element\n4.Show First Element\n5.Number of Elements:\n6.Exit Press 0\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{
				int m;
				printf("Enter Data:");
				scanf("%d",&m);
				insert(m);
				break;
			}
			case 2:{
				del();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				frontelement();
				break;
			}
			case 5:{
				countele();
				break;
			}
			default: {
				printf("Invalid Input:");
				break;
			}
		}
	}while(choice!=0);
}
void insert(int n)
{
	if(rear==NULL)
	{
		rear=(struct node*)malloc(sizeof(struct node));
		rear->data=n;
		rear->link=NULL;
		front=rear;
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		rear->link=temp;
		temp->data=n;
		temp->link=NULL;
		rear=temp;
	}
	count++;
}
void del()
{
	front1=front;
	if(front1==NULL)
	{
		printf("\nNo element to delete:");
	}
	else
	{
		if(front1->link!=NULL)
		{
			front1=front1->link;
			printf("Deleted Element is:%d",front->data);
			free(front);
			front=front1;
			
		}
		else
		{
			printf("Deleted Element is:%d",front->data);
			free(front);
			front=NULL;
			rear=NULL;
		}
		count--;
	}
}
void display()
{
	front1=front;
	if(front1==NULL && rear==NULL)
		printf("\nEmpty:");
	else
	{
		while(front1!=NULL)
		{
			printf("%d->",front1->data);
			front1=front1->link;
		}
		if(front1==rear)
	printf("%d->",front1->data);
	}
		
}
void frontelement()
{
	if(front!=NULL && rear!=NULL)
		printf("Front Element is:%d",front->data);
		else
		printf("No element:");
}
void countele()
{
	printf("Number of Elements:%d",count);
}
