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

int main()
{
    // declaring nodes
    node *head = new node(10);
    node *a = new node(220);
    node *b = new node(40);
    node *c = new node(60);

    /// taking a temporary variable
    node *temp = head;

    // connecting nodes
    head->next = a;
    a->next = b;
    b->next = c;

    // printing nodes
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}