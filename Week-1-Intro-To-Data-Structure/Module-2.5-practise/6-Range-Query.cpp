/*
link -> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    // initializing vector
    vector<int> v(n);
    // taking array numbers
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum = 0;

    // taking pairs
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        while (l <= r)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }

    // cout << sum << endl;

    return 0;
}