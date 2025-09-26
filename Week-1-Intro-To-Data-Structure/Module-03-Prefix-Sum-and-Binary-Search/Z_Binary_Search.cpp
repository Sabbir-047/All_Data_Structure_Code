/*
link -> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
*/
#include <bits/stdc++.h>
using namespace std;


/*
                    <--- Theory --->
    <<- Note ->>   <-- When to use binary search -->
    If we see an array or vector is sorted then we will use binary search

    <<- Note ->> Binary Search time complexity O(logN)

    <<- Note ->> if an array is not sorted then we have to find out the complexity of the total code. If linear approach gives us the better time complexity then we will use linear. But if binary search gives us the better time complexity then we will use binary search method.
*/


int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    // taking elements of the vector
    for (int i = 0; i < n; i++) // O(n)
    {
        cin >> v[i];
    }

    // sorting the vector numbers
    sort(v.begin(), v.end()); // O(Nlogn)

    // taking queries
    while (q--) // O(q)
    {
        // taking searching values
        int val;
        cin >> val;
        int flag = 0;

        // initializing left and right values
        int l = 0;
        int r = n - 1;

        // binary search. complexity much lesser
        while (l <= r)  // BS complexity O(logN)
        {
            int mid = (l + r) / 2;
            if (v[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (v[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        // printing
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}