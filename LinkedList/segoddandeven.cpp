#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    struct node *head = NULL,*ptr,*temp;
	    int n;
	    cin >> n;
	    int x;
	    for(int i=0;i<n;i++)
	    {
	        cin >> x;
	        ptr = new node;
	        ptr->data = x;
	        ptr->next = NULL;
	        if(head==NULL)
            {
               head = ptr;
            }
	        else
	        {
	            temp = head;
	            //temp = ptr;
	            while(temp->next!=NULL)
                {
                  temp = temp->next;
                }
	            //temp->data = x;
	            temp ->next = ptr;
	       }
	           
	    }
	    temp = head;
	    while(temp!=NULL)
	    {
	        if((temp->data)%2==0)
	        {
	           cout << temp->data << " ";
	        }
	        temp = temp->next;
	    }
	    temp = head;
	    while(temp!=NULL)
	    {
	        if((temp->data)%2==1)
	        {
	           cout << temp->data << " ";
	        }
	        temp = temp->next;
	    }
	    //free(head);
	    cout << endl;
	    
	}
	return 0;
}