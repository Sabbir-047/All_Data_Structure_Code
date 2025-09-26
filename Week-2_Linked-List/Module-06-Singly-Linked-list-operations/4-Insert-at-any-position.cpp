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
void insert_anyWhere(node *&head, int pos, int data)
{
    node *newNode = new node(data);
    // corner case
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // insert at any pos
    node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    // if we connect directly to the next node then we will loose the connection. So, we have to connect new=node to desired node first. then connect newNode previous node
    newNode->next = temp->next;
    temp->next = newNode;
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

// linked list doesnt have any indexes. But for better understanding we assume that we have a index and position to insert at any point in the linked list.

int main()
{
    // node *head = NULL;
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);

    // connecting the nodes
    head->next = a;
    a->next = b;

    // insert anywhere
    insert_anyWhere(head, 1, 100);
    insert_anyWhere(head, 1, 1020);

    // printing the linked list
    print_List(head);
    return 0;
}