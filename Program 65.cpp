#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* root= NULL;

void add_at_begin();
void create();
void display();
int length();
void delete_at_pos();
void insert_at_pos();

int main()
{
	int i;
	do{
	printf("\n1.\tCreate and Apppend\n2.\tAdd at Beginning\n3.\tDisplay\n4.\tLength\n5.\tDelete\n6.\tInsert at Position\nEnter your choice:");
	scanf("%d",&i);
	switch(i){
		case 1:{
			create();
			break;
		}
		case 2:{
			add_at_begin();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			printf("\nLength of List:%d\n",length());
			break;
		}
		case 5:{
			delete_at_pos();
			break;
		}
		case 6:{
			insert_at_pos();
			break;
		}
		default:{
			break;
		}
	}
}while(i!=0);
	return 0;
}

void create()
{
	struct node* temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node *p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}

void add_at_begin()
{
	struct node * temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root ==NULL)
		root=temp;
	else
	{
		temp->link=root;
		root=temp;
	}
}
void display()
{
	struct node* temp;
	temp=root;
	if(temp==NULL)
		printf("No Nodes");
		else
		{
			printf("\n");
		while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
	printf("Null\n");
}
}
int length()
{
	struct node* temp;
	temp=root;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}	
	return count;
}
void delete_at_pos()
{
	struct node*temp,*q;
	temp=root;
	int pos,i=1;
	printf("\nEnter position You want to delete:");
	scanf("%d",&pos);
	if(root==NULL)
		printf("\nNo Nodes to Delete:\n");
	else if(pos>length())
	{
		printf("\nInvalid\n");
	}
	else if(pos==1)
	{
		root=temp->link;
		temp->link=NULL;
		free(temp);	
	}
	else
	{
		while(i<pos-1)
		{
			temp=temp->link;
			i++;
		}
		q=temp->link;
		temp->link=q->link;
		q->link=NULL;
		free(q);
		
	}
}
void insert_at_pos()
{
	struct node *temp,*p;
	temp=root;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	int pos,i=1;
	printf("\nEnter Position:");
	scanf("%d",&pos);
	if(root==NULL)
		root=temp;
	else if(pos==1)
	{
		temp->link=root;
		root=temp;
	}
	else
	{
		p=root;
		if(pos>length())
			printf("\n**Invalid:**\n");
		else
		{
			while(i<pos-1)
			{
				p=p->link;
				i++;
			}
			temp->link=p->link;
			p->link=temp;
			
			
		}
			
	}
			
}

