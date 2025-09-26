#include <bits/stdc++.h>
using namespace std;

// class
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// class for queue
class myQueue
{
public:
    node *head = NULL;
    node *tail = NULL;

    // length
    int length = 0;

    // push function for queue
    void push(int val)
    {
        length++;
        node *temp = new node(val);
        if (head == NULL)
        {
            head = tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }

    // pop function for queue
    void pop()
    {
        length--;
        node *dummyHead = head;
        head = head->next;
        delete dummyHead;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    // front function for queue
    int front()
    {
        return head->val;
    }

    // back function for queue
    int back()
    {
        return tail->val;
    }

    // size function for queue
    int size()
    {
        return length;
    }

    // empty function for queue
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
        // shortcut
        // return head == NULL;
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
    // cout << q.front() << " " << q.back() << " " << q.size();
    // printing the queue
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}