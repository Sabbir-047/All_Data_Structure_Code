#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q1;
    queue<int> q2;
    stack<int> st;

    // taking queue and it's values
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        q1.push(x);
        st.push(q1.front());
        q1.pop();
    }

    while (!st.empty())
    {
        q2.push(st.top());
        cout << q2.front() << " ";
        q2.pop();
        st.pop();
    }
    
    return 0;
}