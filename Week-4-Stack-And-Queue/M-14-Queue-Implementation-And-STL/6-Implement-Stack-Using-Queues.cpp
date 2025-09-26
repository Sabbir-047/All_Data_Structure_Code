/*
225. Implement Stack using Queues
----------------------------------
link -> https://leetcode.com/problems/implement-stack-using-queues/description/
*/



// -------- code ----------




/*

class MyStack
{
public:
    queue<int> q;
    MyStack() {}

    void push(int x) { 
        q.push(x);
    }

    int pop()
    {
        queue<int> q1;
        int val;
        while (!q.empty())
        {
            val = q.front();
            q.pop();
            if (q.empty() == true)
                break;
            q1.push(val);
        }
        q = q1;
        return val;
    }

    int top()
    {
        return q.back();
    }

    bool empty()
    {
        return q.empty();
    }
};


*/