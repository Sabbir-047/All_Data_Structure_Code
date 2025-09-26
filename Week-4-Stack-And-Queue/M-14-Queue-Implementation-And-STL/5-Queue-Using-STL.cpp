#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // printing the queue
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    /*
        <- Note -> If we want to pop, front from the queue then first, we must check if it's empty or not.

        <- note -> this is only valid if we are watching the output outside of the loop


        if (q.empty())
            q.pop();
    */

    return 0;
}