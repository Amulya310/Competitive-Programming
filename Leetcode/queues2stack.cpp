class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1,q2;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x;
        if(q1.empty() && q2.empty()) return -1;
        else {
                while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            
             queue<int> q;
            x = q1.front();
            q1.pop();
            q=q2;
            q2 = q1;
            q1 =q;
        }
        return x;
        
    }
    
    /** Get the top element. */
    int top() {
        if(q1.empty() && q2.empty()) return -1;
        else{
            return q1.back();
        }
        
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty() && q2.empty()) return true;
        else{
            return false;
        }
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */