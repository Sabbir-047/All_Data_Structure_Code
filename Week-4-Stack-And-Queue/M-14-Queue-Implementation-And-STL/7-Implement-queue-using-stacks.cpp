/*
Problem -leet 232. Implement Queue using Stacks-
---------------------------------- 
link -> https://leetcode.com/problems/implement-queue-using-stacks/description/

*/

//
// -------- code ----------


/*
class MyQueue {
public:

    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> st1;
        int val;
        while(!st.empty()){
            val = st.top();
            st.pop();
            if(st.empty() == true)
                break;
            st1.push(val);
        }
        while(!st1.empty()){
            st.push(st1.top());
            st1.pop();
        }
        return val;
    }
    
    int peek() {
        stack<int> st1;
        int val;
        while(!st.empty()){
            val = st.top();
            st.pop();
            st1.push(val);
        }
        while(!st1.empty()){
            st.push(st1.top());
            st1.pop();
        }
        return val;
    }
    
    bool empty() {
        return st.empty();
    }
};

*/