/*
link -> https://docs.google.com/document/d/1SInJU7vWMgmLO-lulcQ2aGAeLze-0632fS8Iz-14t_A/edit?tab=t.0
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /// vector
    vector<int> v(n + 1);

    // taking vector input
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // taking prefix vector sum
    vector<int> pre(n + 1);
    pre[1] = v[1];
    // counting prefix sum from 2
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // printing the prefix sum
    for (int i = 1; i <= n; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}