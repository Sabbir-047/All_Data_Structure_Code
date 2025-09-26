/*
link -> https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-06/challenges/duplicate-12
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // initialize vector
    vector<int> v(n);

    // taking vector numbers
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // sort the vector
    sort(v.begin(), v.end());
    // Why sort ? After sorting, duplicates will always be next to each other. There’s no need to compare non-consecutive elements.


    // counting freq array
    // here we are starting from 1. because we have to check the previous index. If we start from the 0 then it will  give us invalid output
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    // printing no
    cout << "NO" << endl;

    return 0;
}