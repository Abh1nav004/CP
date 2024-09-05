#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    stack<int> st2;

    st.push(2);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);

    while(!st.empty()){
        st2.push(st.top());
        st.pop();
    }

    st2.pop();

    while(!st2.empty()){

    cout<<st2.top()<<" ";
    st2.pop();
    }

    return 0;
}