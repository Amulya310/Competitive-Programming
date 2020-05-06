#include<bits/stdc++.h>
using namespace std;
struct Node* head=NULL;
struct Node
{	
	int data;
	struct Node* next;
};
void printlist()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void insert_middle(int pos,int num)
{
	struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
	struct Node* temp=head;
	new_node->data=num;
	int count=0;
	if(pos==0)
	{
		new_node->next=head;
		head=new_node;
	}
	else
	{

	while(temp!=NULL)
	{
		if(count==pos-1)
		{
			break;
		}
		temp=temp->next;
		count++;
	}
	new_node->next=temp->next;
	temp->next=new_node;
}
}
void append(int new_data,int n)
{
	struct Node* new_node= (struct Node*) malloc(sizeof(struct Node));
	struct Node* temp=head;
	new_node->data=new_data;
	new_node->next=NULL;
	if(head==NULL)
	{
		head=new_node;
		return;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
		return;
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		append(temp,n);
	}
	//printlist();
	int num;
	cin>>num;
	int pos;
	cin>>pos;
	insert_middle(pos,num);
	printlist();

}