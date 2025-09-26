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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next; // newNode;
}

// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
    
// }

int getSize(Node* head){
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int x;
    while (cin >> x && x != -1)
    {
        insert_at_tail(head1, tail1, x);
    }
    while (cin >> x && x != -1)
    {
        insert_at_tail(head2, tail2, x);
    }

    if (getSize(head1) == getSize(head2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    

    // printList(head);

    return 0;
}