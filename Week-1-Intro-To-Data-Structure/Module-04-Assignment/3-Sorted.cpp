/*
link -> https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-06/challenges/sorted-2-2
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    // loop  for test cases
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        // array
        vector<int> v(n);

        // taking array inputs
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }

        // checking if the array is sorted or not
        int flag = 0;
        // here we are checking till n-1. so that the condition v[j+1] doesn't get any out of bounds.
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                flag = 1;
                break;
            }
        }

        // printing the values
        if (flag == 1)
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