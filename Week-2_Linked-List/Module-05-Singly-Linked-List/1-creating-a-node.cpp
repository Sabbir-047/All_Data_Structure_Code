#include <bits/stdc++.h>
using namespace std;

// class
class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    /*
                    < --- Theory --- >
        To create a node we have to declare a class. To store the different types of datas together.
        -> then we have to initiLize data into objects.

        1- > create nodes
        2- > initilize nodes values
        3- > connect the nodes with next pointers. Which will point to the next whole node.

        4- > First node is called head. 
        5- > last node is called tail
    */

    // initialize objects
    Node a, b, c;
    a.val = 12;
    b.val = 14;
    c.val = 16;

    // connecting nodes
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // printing nodes (just checking)
    // cout << a.val << " " << b.val << " " << c.val << endl; 

    // printing values with the help of head value. if we dereference the value we get the total values
    // cout << (*a.next).val << endl; same as the below. (a.next) is a pointer. We have to convert it into normal form.
    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
    return 0;
}