#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    // taking vector
    vector<long long int> v(n + 1);

    // taking vector inputs
    for (int i = 1; i <= n; i++) // O(n)
    {
        cin >> v[i];
    }

    // taking prefix vector
    vector<long long int> pre(n + 1);
    // both of them are same
    pre[1] = v[1];
    // making prefix sum
    for (int i = 2; i <= n; i++) // O(n)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // taking query inputs
    while (q--) // O(q)
    {
        int l, r;
        cin >> l >> r;
        // initializing prefix sum
        long long int sum;
        // conditions for prefix sum
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

    return 0;

    // So, Total time complexity of this program is O(N) or O(Q). Any one of it;'s right
}