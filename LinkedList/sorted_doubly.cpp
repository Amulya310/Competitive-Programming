#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* prev;
	struct Node* next;
};
struct Node* head=NULL;
void doubly(int new_data,int n)
{
	struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
	struct Node* temp=head;
	new_node->data=new_data;
	new_node->next=NULL;

	if(head==NULL)
	{
		new_node->prev=NULL;
		head=new_node;
	}
	else if (((head->data)>=(new_node->data)))
	{
		new_node->next=head;
		new_node->next->prev=new_node;
		head=new_node;
	}
	else
	{
		while(temp->next!=NULL && temp->next->data<new_node->data)
		{
			temp=temp->next;
		}
		new_node->next=temp->next;
		if(temp->next!=NULL)
		{
			new_node->next->prev=new_node;
		}
		temp->next=new_node;
		new_node->prev=temp;
	}


}
void printlist()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			doubly(temp,n);
		}
		int num;
		cin>>num;
		doubly(num,n);	
		printlist();
		cout<<endl;
	}
}