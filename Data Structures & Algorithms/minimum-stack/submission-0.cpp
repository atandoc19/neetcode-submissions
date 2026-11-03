class MinStack {
public:
    stack<int> nums;
    stack<int> mins;
    MinStack() {
        
    }
    
    void push(int val) {
        nums.push(val);
        if(mins.empty() || mins.top() >= val) mins.push(val);
        else mins.push(mins.top());
    }
    
    void pop() {
        nums.pop();
        mins.pop();
    }
    
    int top() {
        return nums.top();
    }
    
    int getMin() {
        return mins.top();
    }
};
