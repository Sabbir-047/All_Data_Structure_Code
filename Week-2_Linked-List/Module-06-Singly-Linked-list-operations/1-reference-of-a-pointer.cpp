#include <bits/stdc++.h>
using namespace std;

/*
                < --- Theory --- >
    -> Inside a function if we dereference a pointer it works.
    -> But if we change the pointer totally. lIke we declare another variable and our pointer points into that. then it won't work.


    // This methods are called call by reference, call by value.

    -----> Call by value : If we pass pointer into the function then we are actually not changing into the main function.
    -----> Call by reference : If we pass reference into the function then we are actually passing the addresses. This will change the value inside the function.
*/

// call by reference
void fun(int* &p)
{
    p = NULL;
}

// Note -> Concept is that. if we wanna change into our main function then we have to pass it as a reference pointer.

int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    // cout << "In main: " << p << endl; // to check it pointer is getting null or working in both side.
    // cout << "In main: " << *p << endl; // to check the value
    cout << "In main: " << &p << endl; // to check the address.
    return 0;
}

// call by value
/*
void fun(int *p)
{
    int y = 200;
    p = &y;
    cout << "In fun: " << &p << endl;
}

int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In main: " << *p << endl;
    return 0;
}
*/