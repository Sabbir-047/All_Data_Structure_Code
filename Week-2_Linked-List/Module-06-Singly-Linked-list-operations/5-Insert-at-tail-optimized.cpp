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

// insert at last
void insert_at_last(node *&head, node *&tail, int data)
{
    node *newNode = new node(data);
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

// printlist
void print_List(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

// to add at tail we have to track the head and tail both nodes.
// This will convert the complexity from complexity O(n) to O(1)

int main()
{
    // node *head = NULL;
    node *head = new node(10);
    node *a = new node(20);
    node *tail = new node(30);

    // connecting the nodes
    head->next = a;
    a->next = tail;

    // insert at last
    insert_at_last(head, tail, 40);
    insert_at_last(head, tail, 50);
    insert_at_last(head, tail, 60);

    // printing the linked list
    print_List(head);
    return 0;
}