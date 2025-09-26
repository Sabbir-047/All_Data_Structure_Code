/*
link -> https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // initializing vector
    vector<int> v(n);

    // taking count for the existing numbers
    int count = 0;

    // taking vector elements
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // setting conditions
    for (int i = 0; i < n; i++)
    {
        int target = v[i] + 1;
        if (find(v.begin(), v.end(), target) != v.end())
        {
            count++;
        }
    }

    // printing the values
    cout << count << endl;

    return 0;
}