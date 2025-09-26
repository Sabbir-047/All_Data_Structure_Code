#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << v[3] << endl; // exact pos of the vector
    
    cout << v.back() << endl; // last pos of the vector
    // alternative -> v[v.size()-1]

    cout << v.front() << endl; // first pos of the vector
    // alternate -> v[0];
    return 0;
}