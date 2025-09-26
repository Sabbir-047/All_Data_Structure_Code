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

// insert head function
Node *insert_at_head(Node *head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    return newNode;
}

// insert function tail
Node *insert_at_tail(Node *head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        return newNode;
    }

    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// delete function
Node *del_index(Node *head, int index)
{
    if (head == NULL)
        return head;

    if (index == 0)
    {
        Node *toDelete = head;
        head = head->next;
        delete toDelete;
        return head;
    }

    Node *current = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (current == NULL || current->next == NULL)
            return head;
        current = current->next;
    }

    if (current->next != NULL)
    {
        Node *toDelete = current->next;
        current->next = current->next->next;
        delete toDelete;
    }

    return head;
}

// print function
void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;

    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            head = insert_at_head(head, V);
        }
        else if (X == 1)
        {
            head = insert_at_tail(head, V);
        }
        else if (X == 2)
        {
            head = del_index(head, V);
        }

        printList(head);
    }

    return 0;
}