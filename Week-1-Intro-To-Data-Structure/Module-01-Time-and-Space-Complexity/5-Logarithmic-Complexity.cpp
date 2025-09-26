#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Here this loop will run (n*2) times why ? Because it is now increase as 2 times with previous one. So, now it will run ten times. Which we are seeing in the output if we take 1000 or any number


                        // This is the part
    for (int i = 1; i <= n; i *= 2) // O(log N)
    {
        cout << i << endl;
    }

    // Note ->>> How to identify logarithmic complexity ?

    // ->>> the loop increament or decreament is growing or decreasing by (*, /) multi or division. Then we will identify it as logarithmic complexity. 

    // ->>> If the loop increament or decreament is defining as (+, -) then it's linear complexity.

    /*
    Example ->
    -------
    for(i = n; i >= 1; i /= 3){ O(log N)
        cout << i << endl; 
    }
    How ?
    ---- 
    here it comes first O(log 3 N). But we avoid every constant. So, It becomes O(log N);
    --------- * --------

    Example -2 ====>
    int n;
    cin >> n;
    int k = 2;
    for(int i = 1; i < n; i++){ O(n)
        cout << i << endl;
        i = i * k; // i *= 2  O(log N);
    } 
    
    */

    return 0;
}