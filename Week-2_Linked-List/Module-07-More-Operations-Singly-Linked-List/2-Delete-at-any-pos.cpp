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

// delete head
void delete_any_pos(node *&head, int pos)
{
    node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

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

    // deletefunction
    delete_any_pos(head, 2);

    // print the list
    print_List(head);

    return 0;
}