class MyCircularQueue {
public:
    vector<int>v;
    int front,rear;
    int size;
    int current_size;
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        v = vector<int>(k,0);
        current_size=0;
        size =k;
        front = -1;
        rear = -1;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        if(rear ==-1){
            rear =0;
        }
        front = (front+1)%size;
        v[front] = value;
        current_size++;
        return true;
        
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        current_size--;
        rear = (rear+1)%size;
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return v[rear];
        
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return v[front];
        
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        if(current_size ==0){
            return true;
        }
        return false;
        
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        if(current_size == size){
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */