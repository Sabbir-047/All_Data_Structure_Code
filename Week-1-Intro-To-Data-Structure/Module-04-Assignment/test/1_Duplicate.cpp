#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // taking vectors and it's values
    vector<int> v(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 0;

    // conditions
    sort(v.begin(), v.end());

    // setting conditions
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}