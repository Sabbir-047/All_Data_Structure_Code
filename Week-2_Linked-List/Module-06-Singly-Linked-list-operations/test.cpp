#include <bits/stdc++.h>
using namespace std;

// creating class node]
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

// ADD AT head
void insert_head(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// printlist
void printList(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // connecting the nodes
    head->next = a;
    a->next = b;

    insert_head(head, 12);
    insert_head(head, 121);
    insert_head(head, 1234);

    Node *temp = head;

    printList(temp);
    return 0;
}