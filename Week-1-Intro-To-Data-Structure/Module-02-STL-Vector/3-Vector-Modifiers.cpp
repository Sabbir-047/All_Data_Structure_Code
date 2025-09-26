#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1, 2, 323, 4, 5};
    // vector<int> v1;
    // v1 = v; // assigning one vector into another.
    // // normal way to print this.
    // // for (int i = 0; i < v1.size(); i++)
    // // {
    // //     cout << v1[i] << " ";
    // // }

    // // shortcut or range based loop
    // // data type : from where

    // v1.pop_back();

    // // after pop function
    // for (int x : v1)
    // {
    //     cout << x << " ";
    // }
    // ------------

    // < ----- Insert Function ---- >
    // vector<int> v2 = {10, 20, 30, 40};
    // vector<int> v3 = {11, 22, 33};
    // // single value insertion
    // // v2.insert(v2.begin() + 2, 100);

    // // multiple value or total array vector insertion
    // v2.insert(v2.begin() + 2, v3.begin(), v3.end());
    // for (int x : v2)
    // {
    //     cout << x << " ";
    // }
    // --------------------

    // < ------ Erase function ----- >
    vector<int> v2 = {10, 20, 30, 40};
    vector<int> v3 = {11, 22, 33};
    // erasing single value
    // v2.erase(v2.begin() + 2);

    // erasing multiple value
    // starting point, ending point
    v2.erase(v2.begin() + 1, v2.begin() + 3);
    for (int x : v2)
    {
        cout << x << " ";
    }

    return 0;
}