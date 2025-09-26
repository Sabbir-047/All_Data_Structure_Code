#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    // Stack operation
    int n;
    cin >> n;
    // taking stack values
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // queue operation
    int m;
    cin >> m;
    // taking queue values
    while (m--)
    {
        int y;
        cin >> y;
        q.push(y);
    }

    // setting flag
    int flag = 0;

    // conditions for the problem
    while (!st.empty() && !q.empty())
    {
        if (st.top() == q.front())
        {
            flag = 1;
            st.pop();
            q.pop();
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }

    // conditions for the problem
    if (flag == 1)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }
    

    return 0;
}