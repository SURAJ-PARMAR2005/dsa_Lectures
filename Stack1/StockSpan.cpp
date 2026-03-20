#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
    vector<int> v = {100,80,60,81,70,60,75,85};
    int n = v.size();
    vector<int> pgi(n);
    //pgi build
    pgi[0] = -1;
    stack<int> st;
    st.push(0);
    for(int i = 1;i<n;i++){
        while(st.size() > 0 && v[st.top()]<= v[i]){
            st.pop();
        }
        if(st.size() == 0) pgi[i] = -1;
        else pgi[i] = st.top();
        st.push(i);
    }
    vector<int> ans(n);
    for(int i = 0;i<n;i++){
        ans[i] = i-pgi[i];
    }

    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}