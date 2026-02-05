#include<iostream>
using namespace std;
class Node{ //LL Node
    public:
    int  val;
    Node * next;
    Node(int val) {
        this -> val = val;
        this -> next = NULL;
    }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    //forming LL


    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
    a.next -> val = 60;
    // cout<<(a.next)->val;
    // cout<<(b.next)->val;

    //a se d ki value kese print kraye
    cout<<((a.next)->next)->val;
}