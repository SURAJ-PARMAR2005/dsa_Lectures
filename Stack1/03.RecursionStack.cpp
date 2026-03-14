#include<iostream>
#include<stack>
using namespace std;

void displayRev(stack<int> &st){
    if(st.size() == 0){
        return;
    }
    int x  = st.top();
    cout<<x<<" ";
    st.pop();
    displayRev(st);
    st.push(x);
}


void display(stack<int> &st){
    if(st.size() == 0){
        return;
    }
    int x  = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}

void PushAtBtmRec(stack<int> & st,int val){
     if(st.size() == 0){
        st.push(val);
        return;
    }
    int x  = st.top(); 
    st.pop();
    PushAtBtmRec(st,val);
    st.push(x);
}

void reverse(stack <int> & st){
    if(st.size() == 1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    PushAtBtmRec(st,x);
}

int main() {
    stack<int> st;
    // cout<<st.size()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    displayRev(st);
    cout<<endl;
    display(st);
    cout<<endl;
    // PushAtBtmRec(st,40);
    // display(st);

   

}