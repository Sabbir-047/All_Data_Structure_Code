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
    vector<int> v(n + 1);

    // taking inputs
    for (int i = 1; i <= n; i++) // O(n);
    {
        cin >> v[i];
    }

    // query inputs
    while (q--) // O(q)
    {
        int l, r;
        cin >> l >> r;

        // initialing sum
        int sum = 0;
        for (int i = l; i <= r; i++) // O(n)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
    // total complexity of upper portion : O(q*n);

    // constrains. 1.5 * 10^7
    // our code -> 10^10 (n = 10^5, q = 10^5)

    // time-complexity of this code is : O(QN);

    return 0;
}