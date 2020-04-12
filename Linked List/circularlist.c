#include<stdio.h>
#include<stdlib.h>
void printlist();
struct Node
{
	struct Node *next;
	int data;
};
struct Node *head=NULL;

void printlist()
{
	struct Node *temp=head;
	if(head !=NULL)
	{
		while(temp->next!=head)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	  }	
	  printf("%d",temp->data);
	}
	

}
void insert_last(int new_data)
{
	struct Node *new_node = (struct Node *) malloc (sizeof(struct Node ));
	struct Node *temp = head;

	new_node->data = new_data;
	new_node->next=NULL;
	if(head==NULL)
	{
		head=new_node;
		new_node->next = head;
	}
	else
	{
		while(temp->next != head)
			{
				temp=temp->next;
			}

			temp->next=new_node;
			new_node->next=head;

	}

}
int main()
{
	int n,i,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		insert_last(temp);
		
	}
	printlist();
}