
class MinStack {
public:
    /** initialize your data structure here. */
    stack< long double > s ;
    long double min ;
    MinStack() {
        
    }
    
    void push(long double x) {
        if( s.empty() == true ){
           s.push(x) ;
           min = x ;
        }else{
           if( x < min ){
               s.push( 2 * x - min ) ;
               min = x ;
               
           }else{
              s.push( x ) ;
           }
        }
    }
    
    void pop() {
        if( s.empty() == false ){
            if( s.top() > min ){
                s.pop() ;
            }else{
                min = 2 * min - s.top() ;
                s.pop() ;
            }
        }
    }
    
    int top() {
        if( s.top() > min )
            return s.top() ;
        else
            return min ;
    }
    
    int getMin() {
        return min ;
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */