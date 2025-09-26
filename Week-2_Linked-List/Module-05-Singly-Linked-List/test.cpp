#include <bits/stdc++.h>
using namespace std;

// creating class 
class Node{
public:
    int val;
    Node*next;

    // creating constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};


int main()
{
    // Creating objects / Nodes
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    // connecting the nodes
    head->next = a;
    a->next = b;
    b->next = c;
    // c->next = NULL;  not necessary cz we have already told that in the constructor

    // printing the values or singly linked list
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
    return 0;
}