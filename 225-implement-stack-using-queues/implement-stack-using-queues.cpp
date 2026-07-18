class MyStack {
private:
   std::queue<int> q1;
   std::queue<int> q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        
    }
    
    int pop() {
        int n=q1.size();
        for(int i=0;i<n-1;i++)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q1.pop();
        std::swap(q1,q2);
        return ans;

        
    }
    
    int top() {
        int n=q1.size();
        for(int i=0;i<n-1;i++)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int front=q1.front();
        q1.pop();
        q2.push(front);
        std::swap(q1,q2);
        return front;
        
    }
    
    bool empty() {
        return q1.size()==0;
        
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