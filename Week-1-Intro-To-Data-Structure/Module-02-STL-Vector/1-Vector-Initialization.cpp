#include <bits/stdc++.h>
using namespace std;

/*
        <--- Theory --->
    STL -> Standard Template Library
    --- >> STL is a library
    Vector is a part of the STL. Basically it works with dynamic array. We call vector a template library

    *> Vector should be initialized in the angular bracket -> vector<data-type> declare a name;
    vector<int> v;

    ----
    Vector also has size function
    v.size();

*/

int main()
{
    // <------ Initialization of vector ---->
    // vector<int> v; // Type - 1
    // vector<int> v(5);  // Type - 2 (declare size)
    vector<int> v(3, 23); // Type - 3 (size & values(all))

    // print vector just we used to print array
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // Type - 4 -> Copy a vector into another vector
    vector<int> v1(v);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;

    // type - 5 -> copy array into vector
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v2(a, a + 5);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    cout << endl;

    // type - 6 -> We can declare vector directly
    vector<int> v3 = {1,2,3,4};
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v2[i] << " ";
    }
    


    cout << endl << v.size() << endl;
    return 0;
}