#include <bits/stdc++.h>
using namespace std;

/*
            < ==== Theory ====>
    Suppose, we have a loop or program which is running until it reaches the square root of the given number. Then we call it square root complexity.
    for (int i = 1; i <= sqrt(n); i++)
    {
        cout << i << endl;
    }

    Supposse, we have a number 10000. now if we sqrt it then we will get only 100. So, our program will run 100 times and give us the desired output.
*/

int main()
{
    int n;
    cin >> n;

    // i*i <= N; -> i^2 <= N; -> i <= root N;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // So we dont have to run the loop until end. Which saves our time and make it an easier complexity.

            // main output  // divisible output.
            cout << i << " " << n/i << " ";
        }
    }

    return 0;
}