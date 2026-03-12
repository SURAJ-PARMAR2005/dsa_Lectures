#include<iostream>
#include<stack>
using namespace std;
void print(stack <int> st){
    stack<int> temp;
    while(st.size() > 0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size() > 0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}

void PushAtBottom(stack<int> &st,int val){
    stack<int> temp;
    while(st.size() > 0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }
}

void pushAtIdx(stack<int> & st, int val, int idx){
    stack <int> temp;
    while(st.size() > idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    print(st);
    cout<<endl;
    PushAtBottom(st,80);
    print(st);
    pushAtIdx(st,30,2);
    cout<<endl;
    print(st);

   

}