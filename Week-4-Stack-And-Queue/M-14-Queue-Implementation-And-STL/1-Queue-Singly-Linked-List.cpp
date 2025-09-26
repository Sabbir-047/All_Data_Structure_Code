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

    // size function in queue
    int size = 0;

    // push function for queue
    void push(int val) // O(1)
    {
        size++;
        node *temp = new node(val);
        if (head == NULL)
        {
            head = tail = temp;
            return;
        }
        tail->next = temp;
        temp = tail;
    }

    // pop function for queue
    void pop() // O(1)
    {
        size--;
        node *dummyHead = head;
        head = head->next;
        delete dummyHead;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    // front function in queue
    int front()
    {
        return head->val;
    }

    // back function in queue
    int back()
    {
        return tail->val;
    }

    // size function
    int size()
    {
        return size;
    }

    // empty function
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
        
        // shortcut -> return head == NULL;
    }
};

int main()
{

    return 0;
}