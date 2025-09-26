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
    node *head = new node(10);
    // how this works ? 
    // new keyword have access to the heap memory. So when we call the new keyword it actually creates a node in the heap memory. with a value and one extra node. 


    // how does the constructor works ? 
    // ---> when we call the new node the parameter calls the constructor and it passes the value.

    // note -> the head or any data type where we store the address basically it stays in the stack memory. 

    // same for any node we declare here.
    node *a = new node (20);
    node *b = new node (30);

    // connecting the nodes
    head->next = a;
    a->next = b;

    cout << head-> val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;
    return 0;
}

/*
                < ---- Theory ---- >


    Why we need ? dynamic node ?


    // Supposse we are connectiing two nodes. If we create them in a function and node have to connect from the function. It will connect the function but when the function returns it deletes the static memory. But then it will also delete the node when it returns the function.
    So, we have to use a dynamic node system so that after return or without return it doesnot delete the node.

*/