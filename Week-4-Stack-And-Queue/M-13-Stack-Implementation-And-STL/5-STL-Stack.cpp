#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        we have to initialize the stack just like the vector and list

        vector<int> v;
        list<int> l;
    */

    // <data-type> name;
    stack<int> st;

    // taking size of the stack;
    int n;
    cin >> n;
    // taking values
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    // stack run condition
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    /*
        Note : If we do operation about top and pop. Then we must check if it's empty or not. 

        *> Here in while loop we have checked in the condition that's why we are not checking it inside. 
        *> But, for somecase if we do operation outside this kind of loop. Then we must check if it's empty or not.
    */

    return 0;
}