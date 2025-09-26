#include <bits/stdc++.h>
using namespace std;

// class
class Node
{
public:
    int val;
    Node *next;

    // constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main()
{

    // initialize objects
    Node a(10), b(20), c(30);

    // connecting nodes
    a.next = &b;
    b.next = &c;
    // c.next = NULL; 
    /*
        avoid this line cz initiallly we set this as null. 
        this-> next  = NULL is set when every time we iterate over value. 
        a, b value was also null but we have changed them later. 
    */
    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
    return 0;
}