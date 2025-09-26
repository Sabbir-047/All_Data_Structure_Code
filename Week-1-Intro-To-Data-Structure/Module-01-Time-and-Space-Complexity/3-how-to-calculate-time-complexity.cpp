#include <bits/stdc++.h>
using namespace std;

int main()
{
                // < --- Theory --- >
    /*
        < --- Types of complexity --- > 
        <- Asymptotic notations: ->

        1 -> Omega notation (ohm sign) -> Best case
        2 -> Theta notation (theta sign) -> Average case
        3 -> Big O notation (O) -> Worst case

        Example :
        --------- 
        Suppose, an array 1, 2, 3, 5, 6; (index)
        we are searching for 5 in the array.

        * Case - 1 -> If we can find 5 in the first index then we call it best case (omega notation).
        * Case -2 -> If we can find 5 in middle of the array then we call it average case (theta notation).
        * Case -3 -> If we can find 5 in the last index of the array then we call it worst case(Big O notation).
        ----------

        *** Note ->>  When we code we consider worst case scenario that's why we note it down with O().
        ------------- * -------------

        *) Rules to caltulate time complexity
            1-> ALways take the worst case
            2-> Ignore the constant
                Example : 
                -------
                Suppose a loop for(i = 0; i < n-1; i++);

                here, we will avoid taking the constant (1) from n(-+)1. Suppose we have to run the array 1 million times. if we minus or plus 1 or 2. It doesn't matter for the compiler to count it. Though it's a difference. But compiler can count it easily.

                So, we will write it like O(n). and avoid writing O (n-,+1).
                ---------------- * ----------------

                Example : 
                -------
                for(i = 0; i < 2n; i++);
                In here, time complexity will be O(n). Why ? -> Because in real life it's a massive change. But for compiler it's just a number. It can easily count that much amnount.

    */
    return 0;
}