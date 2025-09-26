#include <bits/stdc++.h>
using namespace std;

// class for stack
class myStack
{
public:
    vector<int> v;

    // push function
    void push(int val)
    {
        v.push_back(val);
    }

    // pop function
    void pop()
    {
        v.pop_back();
    }

    // top function
    int top()
    {
        return v.back();
    }

    // size function
    int size()
    {
        return v.size();
    }

    // empty function
    bool empty()
    {
        return v.empty();
    }
};

/*

Mainly stack is a high level data structure which is represented by the array or linked list.

We don't use any new data structure for the stack.

Normally in computer the stack is being stored as an array.

*/

int main()
{
    /*
        Here we don't need the dynamic object. That's why we are using static object.
        In static object we won't need ->(arrow sign).  We will simple use the .sign to assign or access any function or value.
    */
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    // inside if we can use this too.
    // if (!st.empty())
    if (st.empty() == false)
        cout << st.top() << endl;
    // trying to access a empty stack
    if (st.empty() == false)
        st.pop();
    /*
        If we get any garbage value. That's mean we are trying to access a value. That does not exist. In vs code it might give us garbage value. But in any online judge it will give us runtime error or segmentation fault.

        Note : To avoid getting runtime error or segmentation fault in stack top(), stack pop() function, we will check if the stack is empty or not. (always check that.)
    */
    return 0;
}