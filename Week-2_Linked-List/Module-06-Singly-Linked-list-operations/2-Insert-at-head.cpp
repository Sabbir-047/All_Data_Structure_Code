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

// insert at head function
void insert_at_head(node* &head, int data)
{
    // why dynamic object here ? 
    // because if we sent or create a static object it would have gone after the use of the function. We know that static functions are removed after its called. But in dynamic function they remains. That's why we have called the dynamic object
    node *newHead = new node(data);
    newHead->next = head;
    head = newHead;
}

// printing linked list
void print_List(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    // declaring nodes
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);

    // connecting the nodes
    head->next = a;
    a->next = b;

    // calling the function
    insert_at_head(head, 100);
    insert_at_head(head, 200);
    insert_at_head(head, 300);

    // making an temp varaible to store the head
    node *temp = head;

    // printing the linked list
    print_List(temp);

    return 0;
}