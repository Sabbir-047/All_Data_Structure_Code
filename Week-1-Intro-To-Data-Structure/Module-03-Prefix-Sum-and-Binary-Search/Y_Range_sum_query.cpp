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
    vector<long long int> v(n + 1);

    // taking inputs
    for (int i = 1; i <= n; i++) // O(n);
    {
        cin >> v[i];
    }

    // prefix - sum -> prefix sum can determine the summation from beginning to last. But can not determine the summation from the middle.

    // That's why we will solve it mathematically. If we need a summation from the middle point.Then we will minus from the total prefix sum. to the previous index point.
    // sum = pre[r] - pre[l-1]

    // Prefix sum count is needed once. Cz it will be stored. We will just reuse it again and again

    // Theory of prefix suy
    /*
        pre[i] = pre[i-1] + a[i];
        array -> 1 2 3 4
        pref  -> 1 3 6 10
    */
    // Note -> We will insert the first value

    vector<long long int> pre(n + 1);
    pre[1] = v[1]; // prefix 1st value = vector 1st value
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // print the prefix sum
    /*
        for (int i = 1; i <= n; i++)
        {
            cout << pre[i] << " ";
        }
    */

    // query inputs
    while (q--) // O(q)
    {
        int l, r;
        cin >> l >> r;

        // initialing sum
        long long int sum;
        // conditions
        if (l == 1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }

    // if infuture forgot. Then watch this module video from 5 min

    return 0;
}