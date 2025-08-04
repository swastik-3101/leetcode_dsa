class MyStack {
public:
    queue<int> q1,q2;
    queue<int> current=q1;
    queue<int> notcurrent=q2;
    MyStack() {
        
    }
    
    
    void push(int x) {
        current.push(x);
    }
    
    int pop() {
        while(current.size()>1){
            int x=current.front();
            current.pop();
            notcurrent.push(x);

        }
        int y = current.front();
        current.pop();
        swap(current,notcurrent);
        return y;
    }
    
    int top() {
        while(current.size()>1){
            int x=current.front();
            current.pop();
            notcurrent.push(x);

        }
        int y = current.front();
        current.pop();
        notcurrent.push(y);
        swap(current,notcurrent);
        return y;
        
    }
    
    bool empty() {
        if(current.empty() && notcurrent.empty()){
            return true;
        }
        return false;
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