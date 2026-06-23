class MyQueue {
public:
stack<int>s1;
stack<int>s2;
void move(){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
}
    MyQueue() {
        
    }
    
    void push(int x) {
         s1.push(x);
    }
    
    int pop() {
        if(s2.empty()) move();
        int top=s2.top();
       s2.pop();
        return top;

    }
    
    int peek() {
        if(s2.empty()) move();
        int top=s2.top();
        
        return top;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};
