#include <bits/stdc++.h>
using namespace std;

// class for stack
class myStack
{
public:
    list<int> l;

    // push function
    void push(int val)
    {
        l.push_back(val);
    }

    // pop function
    void pop()
    {
        l.pop_back();
    }

    // top function
    int top()
    {
        return l.back();
    }

    // size function
    int size()
    {
        return l.size();
    }

    // empty function
    bool empty()
    {
        return l.empty();
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
    // while (st.empty()) == false)
    // while (st.empty() != true)
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}