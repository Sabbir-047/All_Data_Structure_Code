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

void printList(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    printList(temp->next);
    cout << temp->val << " ";
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
    
    // alternative
    // while (1)
    // {
    //     cin >> x;
    //     if (x == -1)
    //     {
    //         break;
    //     }
    //     insert_tail(head, tail, x);
    // }

    printList(head);

    return 0;
}