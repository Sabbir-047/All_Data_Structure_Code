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



int main()
{
    myStack st;

    // taking the size of the stack
    int n;
    cin >> n;

    // taking input of the stack elements
    for (int i = 0; i < n; i++)
    {
        // we dont have any array here so we will take input using push function
        int x;
        cin >> x;
        st.push(x);
    }

    // printing the stack values
    // while (st.empty() == false)
    // while (st.empty() != true)
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}