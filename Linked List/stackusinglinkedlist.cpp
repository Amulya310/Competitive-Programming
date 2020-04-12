
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/
struct StackNode
{
    int data;
    StackNode *next;
};
and the structure of the class is
class Stack {
private:
  StackNode *top;
public :
    void push(int);
    int pop();
};
/* The method push to push element into the stack */
void Stack :: push(int x)
{
        StackNode *temp=NULL;
        temp=(StackNode*)malloc(sizeof(StackNode));
        temp->data=x;
        temp->next=NULL;
        if(top==NULL)
        {
            top=temp;
        }
        else
        {
            temp->next=top;
            top=temp;
        }
}
/*The method pop which return the element poped out of the stack*/
int Stack :: pop()
{
        if(top==NULL)
        return -1;
        int a=top->data;
        top=top->next;
        return a;
}
