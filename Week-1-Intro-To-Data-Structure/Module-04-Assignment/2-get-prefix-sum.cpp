/*
link -> https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-06/challenges/get-prefix-sum
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // taking array
    vector<long long int> v(n);

    // taking array numbers
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // prefix array
    vector<long long int> pre(n);
    pre[0] = v[0];
    // prefix sum counting from 2
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    reverse(pre.begin(), pre.end());

    // printing the prefix sum
    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}