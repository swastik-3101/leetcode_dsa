class MyQueue {
public:
    stack<int> s,dummy;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() { 
        while(s.size()>1){
            int x= s.top();
            s.pop();
            dummy.push(x);
        }
        int y= s.top();
        s.pop();
        while(!dummy.empty()){
            int x = dummy.top();
            dummy.pop();
            s.push(x);
        }    
        return y;
    }

    
    int peek() {
        while(!s.empty()){
            int x= s.top();
            s.pop();
            dummy.push(x);
        }
        int y= dummy.top();
        
        while(!dummy.empty()){
            int x = dummy.top();
            dummy.pop();
            s.push(x);
        }    
        return y;
    }
    
    bool empty() {
        return s.empty();
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