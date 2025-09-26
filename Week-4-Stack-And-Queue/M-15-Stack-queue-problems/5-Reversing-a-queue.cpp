/*
Problem link -> https://www.naukri.com/code360/problems/reversing-a-queue_982934
*/

// code 
// ------


/*

#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    stack<int> st;
    // putting the values into stacks so that we can reverse
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    // putting the values into the queues to get reverse
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    return q;
}



*/