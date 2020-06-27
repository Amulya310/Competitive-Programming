class MyLinkedList {
public:
    struct Node
	{
		int data;
		Node* next;
	};
	Node* head = NULL;
    /** Initialize your data structure here. */
    MyLinkedList() {
    	head = NULL;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
    	Node* temp = head;
    	for(int i=0;i<index && temp ;i++)
        {
            temp=temp->next;
        }
        if(!temp){
            return -1;
        }
        return temp->data;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
    	Node* newnode = new Node();
    	newnode->data = val;
        newnode->next = head;
        head = newnode;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
    	Node* newnode = new Node();
    	newnode->data = val;
    	newnode->next = NULL;
    	if(head==NULL){
    		head = newnode;
    	}
    	else {
	    	Node* temp = head;
	    	while(temp->next){
	    		temp = temp->next;
	    	}
	    	temp-> next= newnode;
    	}
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
    	if(index==0){
    		addAtHead(val);
    	}
    	else{
            Node* temp = head;
	    	for(int i=1;i<index && temp ; i++){
                temp= temp->next;
            }
	    	Node* newnode = new Node();
	    	newnode->data = val;
	    	if(temp){
		    	newnode->next = temp->next;
		    	temp ->next = newnode;
	    	}
	    }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
    	if(index == 0){
            if(head){
                Node* delNode = head;
                head = head->next;
                delete delNode;
            }
        }
        else{
            Node* pre = head;
            for(int i = 1; i < index && pre; i ++)
                pre = pre->next;

            if(pre && pre->next){
                Node* delNode = pre->next;
                pre->next = delNode->next;
                delete delNode;
            }
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */