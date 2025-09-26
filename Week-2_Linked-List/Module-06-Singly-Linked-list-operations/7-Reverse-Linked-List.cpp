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


// reverse print
void print_reverse(node *temp)
{
    // base case
    if (temp == NULL)
    {
        return;
    }
    // cout << temp->val << endl;// normal
    print_reverse(temp->next);
    cout << temp->val << endl;// reverse
}

/*
        < --- Theory --- >
    If there's no node mentioned, then we will take last input as -1.
*/

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

    // print the list
    print_reverse(head);

    return 0;
}