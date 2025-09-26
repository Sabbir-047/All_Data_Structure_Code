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

// insert at tail
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insert_at_head(Node *&head, int data)
{
    // why dynamic object here ?
    // because if we sent or create a static object it would have gone after the use of the function. We know that static functions are removed after its called. But in dynamic function they remains. That's why we have called the dynamic object
    Node *newHead = new Node(data);
    newHead->next = head;
    head = newHead;
}

void insert_anyWhere(Node *&head, int pos, int data)
{
    Node *newNode = new Node(data);
    // corner case
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // insert at any pos
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    // if we connect directly to the next node then we will loose the connection. So, we have to connect new=node to desired node first. then connect newNode previous node
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int size = 0;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        size++;
        insert_tail(head, tail, val);
    }



    int q;
    cin >> q;

    while (q--)
    {
        int index, val;
        cin >> index >> val;

        if (index == 0)
        {
            insert_at_head(head, val);
        }

        else if (index > size)
        {
            insert_tail(head, tail, val);
        }

        else
        {
            insert_anyWhere(head, index, val);
        }
    }

        printList(head);

    return 0;
}