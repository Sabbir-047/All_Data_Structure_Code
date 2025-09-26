#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // taking vectors and it's elements
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // prefix sum vector and it's operations
    vector<long long int> pre(n);

    pre[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    reverse(pre.begin(), pre.end());

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
    
    

    return 0;
}