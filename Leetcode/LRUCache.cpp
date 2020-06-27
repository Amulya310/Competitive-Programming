struct Node{
    int data;
    int key;
    Node* prev;
    Node* next;
};
class LRUCache{
    
    map<int,Node*>check;
    int cnt=0,capacity;
    Node* head=NULL;
    Node* tail=NULL;
    public:
    LRUCache(int N){
      head=NULL;
      tail=NULL;
     check.clear();
     cnt=0;
     capacity=N;
    }
        void put(int x, int y){
         if(cnt<capacity && check[x]==NULL)
            {

                addnode(y,x);
            }
        else if(cnt<capacity && check[x]!=NULL)
            {
                removenode(check[x]);
                addnode(y,x);
            }
        else if(cnt==capacity && check[x]==NULL)
            {
                removelast();
                addnode(y,x);
            }
        else if(cnt==capacity && check[x]!=NULL)
            {
                removenode(check[x]);
                addnode(y,x);
            }

    }
    int get(int x)
    {
            if(check[x]==NULL)
                return -1;
            int ans=check[x]->data;
            removenode(check[x]);
            addnode(ans,x);
            return ans;

    }
    void addnode(int x,int key)
        {
            Node* newnode=new Node();
            newnode->data=x;
            newnode->key=key;
            check[key]=newnode;
            if(head==NULL)
                    {
                        head=newnode;
                        head->next=NULL;
                        head->prev=NULL;
                        tail=newnode;
                    }
            else
                    {
                        newnode->next=head;
                        head->prev=newnode;
                        newnode->prev=NULL;
                        head=newnode;
                    }
        cnt++;
        }
    void removelast()
        {
            if(head==tail)
                {
                    check[tail->key]=NULL;
                    head=NULL;
                    tail=NULL;
                    cnt--;
                }
          else
          {
            check[tail->key]=NULL;
            Node* pr=tail->prev;
            pr->next=NULL;
            tail=pr;
            cnt--;
          }
        }
    void removenode(Node* t)
        {
            Node* pt=t;
             if(pt->key==tail->key)
                {
                    removelast();
                }
               else if(pt->key==head->key)
                {
                    check[pt->key]=NULL;
                    head=pt->next;
                    head->prev=NULL;

                    cnt--;
                }
              else
                {
                    Node* sprev=pt->prev;
                    Node* snx=pt->next;
                    check[pt->key]=NULL;
                    sprev->next=snx;
                    snx->prev=sprev;
                    cnt--;
                }

        }
};