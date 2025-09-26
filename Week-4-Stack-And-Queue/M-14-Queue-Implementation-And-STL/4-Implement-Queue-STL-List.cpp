#include <bits/stdc++.h>
using namespace std;

// class for queue
class myQueue
{
public:
    list<int> l;

    // push function for queue
    void push(int val) // O(1)
    {
        l.push_back(val);
    }

    // pop function for queue
    void pop() // O(1)
    {
        l.pop_front();
    }

    // front function for queue
    int front() // O(1)
    {
        return l.front();
    }

    // back function for queue
    int back() // O(1)
    {
        return l.back();
    }

    // size function for queue
    int size() // O(1)
    {
        return l.size();
    }

    // empty function for queue
    bool empty() // O(1)
    {
        return l.empty();
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // printing the queue
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}