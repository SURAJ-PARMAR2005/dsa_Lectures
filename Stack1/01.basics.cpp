#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    stack<int> temp;

    while(st.size() >0){
        // cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    
    while(temp.size() > 0){
        int x = temp.top();
        cout<<x<<""; 
        st.push(x);
        temp.pop(); 
    }

}