/*
link -> https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // taking freq string
    int freq[26] = {0};

    // count frequencies
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    // printing frequencis
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}