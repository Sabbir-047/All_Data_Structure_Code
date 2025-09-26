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
void insert_at_last(node *&head, int data)
{
    node *newNode = new node(data);
    // corner case
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    
    node *temp = head;
    while (temp->next != NULL) // we write it as temp-> next cz we have to go till last
    {
        temp = temp->next;
    }
    // right now it's at last node
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

int main()
{
    // node *head = NULL;
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);

    // connecting the nodes
    head->next = a;
    a->next = b;

    // insert at last
    insert_at_last(head, 40);
    insert_at_last(head, 50);
    insert_at_last(head, 60);

    // printing the linked list
    print_List(head);
    return 0;
}