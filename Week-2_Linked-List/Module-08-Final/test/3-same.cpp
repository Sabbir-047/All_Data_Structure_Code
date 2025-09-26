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

bool areSame(Node *head, Node *head1)
{
    Node *temp = head;
    Node *temp1 = head1;
    while (temp != NULL && temp1 != NULL)
    {
        if (temp->val != temp1->val)
        {
            return false;
        }
        temp = temp->next;
        temp1 = temp1->next;
    }
    return temp == NULL && temp1 == NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int x;

    while (cin >> x && x != -1)
    {
        insert_tail(head, tail, x);
    }
    while (cin >> x && x != -1)
    {
        insert_tail(head1, tail1, x);
    }

    bool boolean = areSame(head, head1);

    if (boolean == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}