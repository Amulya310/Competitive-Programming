class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int>s1,s2;
    MyQueue() {
       
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x = peek();
        s2.pop();
        return x;
    }
        
    
    /** Get the front element. */
    int peek() {
        if(s1.empty() && s2.empty()){
            return -1;
        }
        else{
            
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            else{
                return s2.top();
            }
        }
        
        return s2.top();
        
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(s2.empty() && s1.empty()){
            return true;
        }
        else
            return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */