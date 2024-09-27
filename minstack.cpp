class MinStack {
public:

    stack<int>storeStack, minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        storeStack.push(val);

        if(minStack.empty() or val<=minStack.top())
        minStack.push(val);
        
    }
    
    void pop() {
        if(storeStack.top()==minStack.top()){
            minStack.pop();
            storeStack.pop();
        }
        else
        storeStack.pop();
        
    }
    
    int top() {

        return storeStack.top();
        
    }
    
    int getMin() {

        return minStack.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */