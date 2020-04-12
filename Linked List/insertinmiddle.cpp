
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the Node of the linked list is as
struct Node {
	int data;
	Node* next;
};
*/
// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x)
{
    if(head==NULL)
    {
        return head;
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    count=(count/2)+(count%2);
    temp=head;
    Node* temp1=new Node();
    temp1->data=x;
    while(count>1)
    {
        temp=temp->next;
        count--;
    }
    temp1->next=temp->next;
    temp->next=temp1;
    return head;
    
}