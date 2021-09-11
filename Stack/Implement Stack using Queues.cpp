link-https://leetcode.com/problems/implement-stack-using-queues/

```````````````````


class MyStack {
public:
    /** Initialize your data structure here. */
     queue<int>q1;
    queue<int>q2;
    MyStack() {
       
    }
    
    /** Push element x onto stack. */
    void push(int x) {
      q2.push(x);
      while(!q1.empty()){
          q2.push(q1.front());
          q1.pop();
      }
      swap(q1,q2);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x=q1.front();
        q1.pop();
        return x;
    }
    
    /** Get the top element. */
    int top() {
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty()){
            return 1;
        }
        return 0;
    }
};
