#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, int data)
{
    // why dynamic object here ?
    // because if we sent or create a static object it would have gone after the use of the function. We know that static functions are removed after its called. But in dynamic function they remains. That's why we have called the dynamic object
    Node *newHead = new Node(data);
    newHead->next = head;
    head = newHead;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insert_at_any(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int returnIndex(Node *head, int x)
{
    int index = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int value;

        while (true)
        {
            cin >> value;
            if (value == -1)
            {
                break;
            }
            insert_tail(head, tail, value);
        }

        int X;
        cin >> X;

        int index = returnIndex(head, X);
        cout << index << endl;
    }
        return 0;
}