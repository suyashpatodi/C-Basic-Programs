#include<stdio.h>
int queue[100],front=-1,rear=-1,n,choice;
void insert(int);
void del();
void display();
int main()
{
	printf("Enter number of Elements:");
	scanf("%d",&n);
	do{
		printf("\nEnter Your Choice:\n1.Push Element\n2.Pop Element\n3.Display Element\n4.Exit Press 0\n");
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
			default: {
				printf("Invalid Input:");
				break;
			}
		}
	}while(choice!=0);
}
void insert(int k)
{
	if(rear==n-1)
	 printf("Queue Overflow");
	 else{
		if(front==-1)
			front=0;
		rear=rear+1;
		queue[rear]=k;
}
}
void del()
{
	if (front>rear || front==-1)
	{
		printf("Stack Empty");
	}
	else
	{
		printf("\nPopped element is:%d",queue[front]);
		front=front+1;
	}
}
void display()
{
if (front>rear || front==-1)
	{
		printf("Stack Empty");
	}
	else
	{
		for(int i=front;i<=rear;i++)
			printf("%d\t",queue[i]);
	}
}

