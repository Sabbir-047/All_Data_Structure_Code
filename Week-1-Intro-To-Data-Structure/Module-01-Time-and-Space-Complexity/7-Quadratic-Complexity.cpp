#include <bits/stdc++.h>
using namespace std;

/*
        <---- Theory ----->
    When it will become quadratic complexity?
    if same loop or program is nested. Then it will be a quadratic complexity.
    O(N * N) or, O(N^2)

    Example - 1 (same type input)
    -----------
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Sabbir" << endl;
        }
    }

    complexity -> O(N * N)
    ---------- * ----------

    Example - 2(different input)
    // complexity -> O(N * M)

*/

int main()
{
    int n, m;
    cin >> n >> m;

    // same type input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) // complexity O(N * M)
        {
            cout << "Sabbir" << endl;
        }
    }

    return 0;

    // Total Complexity of this program
    // O(N * N);
    // bcz it's printin the values or executing the program N * N times. example : 3 * 3 - 9
}