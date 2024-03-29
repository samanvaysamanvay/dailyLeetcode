class MyQueue {
    stack<int> st1,st2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        st2.push(x);
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
    }
    
    int pop() {
        int front_element=st2.top();
        st2.pop();
        return front_element;
    }
    
    int peek() {
        return st2.top();
    }
    
    bool empty() {
         return st2.empty();        
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