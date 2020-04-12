#include<stdio.h>
#include <stdbool.h>
#include<stdlib.h>
struct StackNode
{
	int data;
	struct StackNode *next;
};
struct StackNode * head= NULL;
struct StackNode* new_Node(int new_data)
{
	struct StackNode* stacknode= (struct StackNode *) malloc (sizeof(struct StackNode));
	stacknode->data=new_data;
	stacknode->next =NULL;
	return stacknode;
}

bool isEmpty()
{
	if(!head)
		return true;
	else
		return false;

}

void push(int data)
{
	struct StackNode * stacknode = new_Node(data);
	stacknode->next=head;
	head = stacknode;
	printf("%d pushed to stack \n",data);
}

int pop()
{
	int min;
	if(isEmpty())
	{
		return min;
	}
	struct StackNode * temp = head;
	head = head->next;
	int popped = temp->data;
	free(temp);

	return popped;
}

int peek()
{
	int min;
	if(isEmpty())
	{
		return min;
	}	
	return head->data;
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		push(temp);
	}
	printf("%d popped from stack\n", pop());
 
    printf("Top element is %d\n", peek());
 
}