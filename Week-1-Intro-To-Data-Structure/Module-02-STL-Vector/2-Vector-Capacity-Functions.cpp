#include <bits/stdc++.h>
using namespace std;

int main()
{
    // < ----- Vector capacity function ----- >
    // vector capacity function is basically Zero. but if we give or take any  number. Then it becomes the size or capacity it's taking
    vector<int> v;
    cout << v.capacity() << endl;

    // we can push a value into the vector using push_back function
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;

    // Note -> Vector always increases its capacity by double When it's reaches it's capacity.
    // -------------

    cout << "Clear function : "<< endl;
    // < --- Clear function --- >
    // Clear function make the size zero. But do not clear the memory. even we can access the memory of the vector after clearing the array.
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    cout << v1.size() << endl;
    v1.clear();
    cout << v1.size() << endl;
    // accessing the values by their indexes. Even we have used the clear function.
    cout << v1[1] << endl;
    // But if we push back any values. It will push the number from the starting index.

    vector<int> v11;
    v11.push_back(12);
    v11.push_back(13);
    v11.push_back(14);
    v11.resize(7, 2);

    for (int i = 0; i < v11.size(); i++)
    {
        cout << v11[i] << " ";
    }

    return 0;
}