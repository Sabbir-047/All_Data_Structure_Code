#include <bits/stdc++.h>
using namespace std;

/*
            < --- Theory ---->
    replace(v.begin(),v.end(),value,replace_value)

*/

int main()
{
            // < ---- Replace Function ---- >
    // vector<int> v = {1, 2, 3, 2, 5, 2};
    // // begin, end, changing value, replaced value
    // // replace(v.begin(), v.end(), 2, 100);
    // replace(v.begin(), v.end() - 1, 2, 100);

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }


            // < --- Find function ---> 
    vector<int> v = {1, 2, 3, 2, 5, 2};

    // calling iterator. - find function returns iterator
    auto it = find(v.begin(), v.end(), 5);
    // if we want iterator value then we have to add pointer before it.
    if (it == v.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    
    






    return 0;
}