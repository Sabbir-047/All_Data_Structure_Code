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

// Min max function
int findMaxMinDifference(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    Node *current = head;
    while (current)
    {
        maxVal = max(maxVal, current->val);
        minVal = min(minVal, current->val);
        current = current->next;
    }

    return maxVal - minVal;
}

// delete val
void deleteLinkedList(Node *head)
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

    int difference = findMaxMinDifference(head);

    // Output the result
    cout << difference << endl;
    // Cleanup memory
    deleteLinkedList(head);

    return 0;
}