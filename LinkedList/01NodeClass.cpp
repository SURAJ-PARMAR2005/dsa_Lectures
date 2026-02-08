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

void display(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size(Node * head){
    Node * temp = head;
    int n = 0;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }
   return n;
}

int main(){
    // Node a(10);
    // Node b(20);
    // Node c(30);
    // Node d(40);

    // //forming LL


    // a.next = &b;
    // b.next = &c;
    // c.next = &d;
    // d.next = NULL;
    // // a.next -> val = 60;
    // // cout<<(a.next)->val;
    // // cout<<(b.next)->val;

    // //a se d ki value kese print kraye
    // // cout<<((a.next)->next)->val;
    
    // Node temp = a;//it have the content of node a but diff address of its own
    // while(1){
    //     cout<<temp.val<<" ";
    //     if(temp.next == NULL) break;
    //     temp = *(temp.next);
    // }

    Node *a = new Node(10);//a stores the adress of a node
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node * e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // Node * temp = a;
    // while(temp !=NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }

    // cout<<a->next->val;

    display(a);
    cout<<size(a);
}