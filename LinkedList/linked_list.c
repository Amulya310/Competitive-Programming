#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};
struct Node *head=NULL;

Node CreateNode(int x)
{
	struct Node* new_node= (struct Node* ) malloc(sizeof(struct Node));
	struct Node* temp= head;
	new_node->data = x;
	new_node->next = NULL;

	while(head==NULL)
	{
		head=new_node;
		return;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new_node;
	return;
}

void printlist()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		CreateNode(t);
	}
	printlist();
}
