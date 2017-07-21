#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* next;
}node;
node* head;
void insert(int x)
{
	node* temp;
	temp=(node*)malloc(sizeof(node));
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}
void print()
{
	node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
		
	}
	printf("\n");
}
int main()
{
	int a,b;
	head=NULL;
	printf("How many numbers you want to insert?\n");
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		int c;
		printf("Enter the value:\n");
		scanf("%d",&c);
		insert(c);
		print();
	}
	return 0;
}