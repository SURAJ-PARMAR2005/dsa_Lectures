#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main() {
    string str = "aaabbcddaabffg";
    stack<char> st;

    int n = str.length();
    st.push(str[0]);
    for(int i = 1;i<n;i++){
        if(st.top() == str[i]){
            continue;
        }
        else st.push(str[i]);
    }

    string s;
    while(st.size()> 0){
        s.push_back(st.top());
        st.pop();
    }

    reverse(s.begin(),s.end());
    for(int i = 0;i<s.length();i++){
        cout<<s[i]<<" ";
    }


}