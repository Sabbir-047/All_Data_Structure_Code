#include <bits/stdc++.h>
using namespace std;

/*
            < ---- Theory ---- >
    Space complexity is basically a measurement based on input. How much memory is taking per execution.

    *> Space complexity changes when we take an array.

*/

int main()
{
    int n; // O(1)
    // double x; // O(1)
    cin >> n;
    int a[n]; // here space complexity depends on the value of n. 
    //  Space complexity -> O(n); How much memoery it allocates.
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Space complexity for 2D Matrix.
    // O(N*N) -> O(N^2)
    /*
        int a[n][n];
        for(int i = 0; i < n; i++){
            cin >> a[i][i];
        }
    */

    return 0;
}