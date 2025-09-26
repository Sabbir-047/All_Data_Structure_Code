#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector input output is same as array i,o
    // but the size we take must be taken inside the () brackets.
    int n;
    cin >> n;
    vector<int> v;
    // if we declare the size of the vector we will take input like  first one.
    // but if we don't declare then we have to use push_back function
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}