/*
link -> https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-06/challenges/printing-x
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // printing x
    for (int i = 0; i < n; i++) // for row.
    {
        for (int j = 0; j < n; j++) // for column.
        {
            // middle row
            if (i == j && (j == (n - 1) / 2))
            {
                cout << "X";
            }
            // for left diagonal we have
            else if (i == j)
            {
                cout << "\\";
            }
            // for right diagonal we have
            else if (j == (n - 1 - i))
            {
                cout << "/";
            }
            // for spaces
            else
            {
                cout << " ";
            }
        }
        cout << endl; // to move into the new row.
    }

    return 0;
}