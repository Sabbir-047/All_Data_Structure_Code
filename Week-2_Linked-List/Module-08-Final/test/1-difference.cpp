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

int return_Size(Node *head)
{
    int count = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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

int returnMin(Node *&head)
{
    Node *temp = head;
    int min = INT_MAX;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val < min)
        {
            min = i->val;
        }
    }
    return min;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
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

    // get the difference
    int difference= abs(returnMax(head) - returnMin(head));
    cout << difference << endl;

    return 0;
}