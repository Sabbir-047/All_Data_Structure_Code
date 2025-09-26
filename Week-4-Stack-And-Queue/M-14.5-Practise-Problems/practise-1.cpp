/*
Problem link -> https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit?tab=t.0

*/

// --------------------

// code

// -------------------------

#include <bits/stdc++.h>
using namespace std;

// class
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
    int length()
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
    // taking stacks
    myStack st1;
    myStack st2;

    // first stack
    int n;
    cin >> n;
    // first stack values
    while (n--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    // second stack
    int m;
    cin >> m;
    // second stack values
    while (m--)
    {
        int y;
        cin >> y;
        st2.push(y);
    }

    // setting flag
    int flag = 0;

    // checking conditions for the problem
    while (!st1.empty() && !st2.empty())
    {
        if (st1.top() == st2.top())
        {
            // count++;
            flag = 1;
            st1.pop();
            st2.pop();
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    // condition for yes
    if (flag == 1)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}