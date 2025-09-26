#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // taking vectors and it's elements
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // taaking query numbers and making conditions
    int q;
    cin >> q;

    while (q--)
    {
        int target;
        cin >> target;

        // using auto iterator to minimize the overall complexity
        auto it = find(v.begin(), v.end(), target);

        if (it == v.end())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
        
    }
    
    
    return 0;
}