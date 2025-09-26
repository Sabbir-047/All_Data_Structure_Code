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

// insert node at the end
void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// Function to compare two linked lists
bool are_same(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1 == NULL && head2 == NULL;
}

void del_list(Node *head)
{
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    // initializing nodes
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int value;

    // taking value for 1
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert(head1, tail1, value);
    }

    // taking value for 2
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert(head2, tail2, value);
    }

    // conditions to check and print
    if (are_same(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    // del garbage
    del_list(head1);
    del_list(head2);

    return 0;
}