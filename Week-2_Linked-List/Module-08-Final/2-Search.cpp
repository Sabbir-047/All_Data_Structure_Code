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

// Insert function
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

// func to find the x
int find_Pos(Node *head, int X)
{
    int index = 0;
    Node *current = head;

    while (current)
    {
        if (current->val == X)
        {
            return index;
        }
        current = current->next;
        index++;
    }

    return -1;
}

// dle val
void delete_list(Node *head)
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
    int T;
    cin >> T;
    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int value;

        while (true)
        {
            cin >> value;
            if (value == -1)
            {
                break;
            }
            insert(head, tail, value);
        }

        int X;
        cin >> X;

        int index = find_Pos(head, X);
        cout << index << endl;

        // memoery clean
        delete_list(head);
    }

    return 0;
}