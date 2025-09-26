#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *tail;
    Node(int val)
    {
        this->next = NULL;
        this->val = val;
    }
};

// insert at any position
void insert_Any_Pos(Node *&head, int pos, int val)
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


// print function
void printList(Node * head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    insert_Any_Pos(head, 2, 100);
    insert_Any_Pos(head, 2, 200);
    insert_Any_Pos(head, 2, 300);

    printList(head);

    return 0;
}