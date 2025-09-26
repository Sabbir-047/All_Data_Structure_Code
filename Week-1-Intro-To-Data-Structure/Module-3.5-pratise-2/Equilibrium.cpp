#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // taking vector and it's elements.
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int left_sum;
    int right_sum;

    left_sum = v[0] + v[1] + v[2];
    right_sum = v[4] + v[5] + v[6];

    // conditions
    if (left_sum == right_sum)
    {
        cout << v[0 + 3];
    }

    else
    {
        return 0;
    }

    return 0;
}