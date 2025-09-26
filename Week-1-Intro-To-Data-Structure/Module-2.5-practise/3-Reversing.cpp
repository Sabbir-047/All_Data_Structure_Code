/*
link -> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // taking vector
    vector<int> v(n);
    // taking vector input 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // reversing the vector
    reverse(v.begin(), v.end());

    // printing the vector
    for (int x : v)
    {
        cout << x << " ";
    }
    
    
    return 0;
}