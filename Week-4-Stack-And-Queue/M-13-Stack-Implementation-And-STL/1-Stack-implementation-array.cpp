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

Mainly stack is a abstract data structure which is represented by the array or linked list.

We don't use any new data structure for the stack.

Normally in computer the stack is being stored as an array.

*/

int main()
{

    return 0;
}