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

int returnMax(Node *&head)
{
    Node *temp = head;
    int max = INT_MIN;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
    }
    return max;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (cin >> x && x != -1)
    {
        insert_tail(head, tail, x);
    }
    int result = returnMax(head);
    cout << result << endl;

    return 0;
}