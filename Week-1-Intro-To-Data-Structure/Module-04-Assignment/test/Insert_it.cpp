#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    

    // another vector index
    int m;
    cin >> m;
    vector<int> b(m);

    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    int target;
    cin >> target;

    a.insert((a.begin() + target), b.begin(), b.end());

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}