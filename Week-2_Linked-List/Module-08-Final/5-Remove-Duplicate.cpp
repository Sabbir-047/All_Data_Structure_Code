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

// inserting new nodes
Node *insertAtTail(Node *head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        return newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
        return head;
    }
}

// Remove fucntion
void removeDuplicates(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        Node *runner = current;
        while (runner->next != NULL)
        {
            if (runner->next->val == current->val)
            {
                Node *duplicateNode = runner->next;
                runner->next = runner->next->next;
                delete duplicateNode;
            }
            else
            {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

// print function
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    int value;

    while (cin >> value && value != -1)
    {
        head = insertAtTail(head, value);
    }

    // calling functions
    removeDuplicates(head);
    printList(head);

    return 0;
}