#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node *next;
	int data;
};
struct Node *head=NULL;


void middle_element()
{
	struct Node *first_ptr=head;
	struct Node *second_ptr=head;
	int count=0;
	if(head !=NULL)
	{
		//printf("count = %d",count);
		while( first_ptr !=NULL  && first_ptr->next !=NULL)
		{
			count++;
			first_ptr=first_ptr->next->next;
			second_ptr = second_ptr->next;
		}
		printf("count = %d",count);
		printf("middle element is =  %d",second_ptr->data);
	}
	//printf("hello\n");
}
void reverse_node()
{
	struct Node *prev =NULL;
	struct Node *current = head;
	struct Node *Next=NULL;

	while(current!=NULL)
	{
		Next = current->next;
		current->next = prev;
		prev = current;
		current = Next;
	}	
	head = prev;
}
void delete_node(int key)
{
	struct Node *temp = head , *last;

	if(temp->data == key && temp !=NULL)
	{
		head = temp->next;
		free(temp);
		return;
	}
	while(temp !=NULL && temp->data !=key)
	{
		last =temp ;
		temp=temp->next;
	}

	if(temp == NULL)
		return;

		last -> next = temp->next;
		free(temp);

}
void insert_front(int new_data)
{
	struct Node *new_node = (struct Node *) malloc(sizeof(struct Node ));
	new_node->data=new_data;
	new_node->next=head;d
	head = new_node;


}

void insert_middle(int new_data , int key)
{
	struct Node *new_node = (struct Node *) malloc (sizeof(struct Node));
	struct Node *temp = head;

	new_node->data= new_data;
	new_node->next =NULL;

	while(temp!=NULL)
	{
		if(temp->data == key)
		{
			new_node->next = temp->next;
			temp->next = new_node;
		}

		temp=temp->next;
	}

}


void insert_last(int new_data)
{
	struct Node *new_node = (struct Node *) malloc (sizeof(struct Node ));
	struct Node *temp = head;

	new_node->data = new_data;
	new_node->next = NULL;


	if(head==NULL)
		{
			head = new_node;
		}
	else
		{
			while(temp->next != NULL)
			{
				temp=temp->next;
			}

			temp->next=new_node;
		}
}
void printlist()
{
	struct Node *temp=head;
	while(temp!=NULL)
	{
		int t;
		t=temp->data;
		printf("%d\n",t);

		temp=temp->next;
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
	//insert_front(0);
	//insert_middle(8,2);
	printlist();

	delete_node(2);
	//printlist();
	reverse_node();
	//printlist();
	middle_element();

}