#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking stack & it's values
    stack<int> st;
    stack<int> st1;
    
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
        // second part
        st1.push(st.top());
        cout << st1.top() << " ";
        st1.pop();
    }

    return 0;
}