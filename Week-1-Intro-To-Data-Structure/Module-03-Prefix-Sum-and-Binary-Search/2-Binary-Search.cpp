/*
link -> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    // initializing vector
    vector<int> v(n);

    // taking vector numbers
    for (int i = 0; i < n; i++) // O(n)
    {
        cin >> v[i];
    }

    // queues
    while (q--) // O(q)
    {
        int x;
        cin >> x;
        // conditions
        int flag = 0;
        for (int i = 0; i < n; i++) // O(n)
        {
            if (v[i] == x)
            {
                flag = 1;
            }
        }

        // printing values
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    // total T.C of upper portion O(n * q)
    // so total TC becomes 10^10
    // total TC we need 10^7
    // for binary search elements must be sorted.
    /*
    Binary Search theory 
    middle = (left + right)/2; 
    if middle > search . then search left.
    if middle < search. Then search 
    */

    return 0;
}