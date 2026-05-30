#include<bits/stdc++.h>
using namespace std;

void f(unordered_set<int> & st,vector<int> &v, int idx,int sum){
   if(idx >= v.size()) {
    st.insert(sum);
    return;
   }

   f(st,v,idx+1,sum + v[idx]);
   f(st,v,idx+1,sum);
   return;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    unordered_set<int> st;
    f(st,v,0,0);

    for(auto ele : st){
        cout<<ele <<" ";
    }
}