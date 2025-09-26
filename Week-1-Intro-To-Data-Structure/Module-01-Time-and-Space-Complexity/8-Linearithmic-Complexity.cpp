#include <bits/stdc++.h>
using namespace std;

/*
        <---- Theory ----->

*/

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) // complexity O(N);
    {
        for (int j = 0; j < m; j *= 2) // complexity O(log N);
            cout << "Sabbir" << endl;
    }
    return 0;
}



// Total Complexity of this program
// O(N * log N) -> O(N log n);
