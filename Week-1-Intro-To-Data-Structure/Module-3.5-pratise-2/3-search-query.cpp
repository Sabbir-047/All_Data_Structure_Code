/*
link -> https://docs.google.com/document/d/1SInJU7vWMgmLO-lulcQ2aGAeLze-0632fS8Iz-14t_A/edit?tab=t.0
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // taking vector
    vector<int> v(n);
    // vector elements
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // sorting the vector
    sort(v.begin(), v.end());

    // taking queries and conditions
    int q;
    cin >> q;
    // taking queries
    while (q--)
    {
        int val;
        cin >> val;

        // initializing flag
        int flag = 0;

        // initializing left and right
        int l = 0;
        int r = n - 1;

        // loop will run through ?
        while (l <= r)
        {
            // taking mid point
            int mid = (l + r) / 2;
            // conditions
            if (v[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (val < v[mid])
            {
                r = mid - 1;
                // if our val is less than the mid we will search left wing. So we dont have to search in the right side. so right point will end before the mid point
            }
            else
            {
                l = mid + 1;
                // if our val is bigger than the mid we will search right wing. So we dont have to search in the left side. so left point will start after the mid point.
            }
        }
        // printing the values
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}