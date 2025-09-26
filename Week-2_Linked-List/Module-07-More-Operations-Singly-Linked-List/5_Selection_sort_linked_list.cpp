#include <bits/stdc++.h>
using namespace std;

// class
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

// insert at last
void insert_at_last(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    // corner case
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;
    // or this is also valid
    // tail = newNode;
}

// sort function
void sorted_List(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val >= j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

// printlist
void print_List(Node *head)
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

    int val;
    while (1) // O(n)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_last(head, tail, val); // O(1)
    }

    // sorted Linked List
    sorted_List(head);

    // print the list
    print_List(head);

    return 0;
}