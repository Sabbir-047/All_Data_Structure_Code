#include <bits/stdc++.h>
using namespace std;

/*
                < ---- Theory --- >
    ---> Time complexity of a program or line is how many times it running.

    ---> We will avoid constant like(n/2, n+2, n-2, n*2); we will take them as O(n) not their plus, minus, into, divide.

    // Note -> We will take the highest time complexity of the program to find the total programs time complexity.

*/

int main()
{
    int n;    // O(1) cause one integer
    cin >> n; // O(1) cause it's just taking input once.

    for (int i = 1; i <= n; i += 2) // O(n) 
    // cause it's taking input n/2 times. Though here the loop is executed 5 times only which is half of the next loop. But we avoid constant. That's why still it's O(n) complexity
    {
        cout << i << " ";
    }

    cout << endl;

    for (int i = 1; i <= n; i++) // O(n) 
    {
        cout << i << " ";
    }

    return 0; // O(1) cause it's just terminating function one time.

    // Here, time complexity of this program is O(n)
    // How ? ans -> O(n + n + 1 + 1 + 1). 
    // We can avoid the constant.
    // So, now it becomes O(n+n). which is O(2n).
    // So, It becomes O(n).
}