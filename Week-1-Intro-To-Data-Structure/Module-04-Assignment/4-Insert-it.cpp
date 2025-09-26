/*
link -> https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-06/challenges/insert-the-vector
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // initialize array a
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // initialize b
    int m;
    cin >> m;
    vector<int> b(m);
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    // input position
    int x;
    cin >> x;

    // conditions
    a.insert((a.begin() + x), b.begin(), b.end());

    // printing the modified array
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}