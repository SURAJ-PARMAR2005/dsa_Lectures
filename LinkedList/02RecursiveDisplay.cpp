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

void revDisplay(Node * head){
    if(head == NULL) return;
     revDisplay(head -> next);
     cout<<head->val<<" ";
}

void displayrec(Node * head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);

}

int main(){

    Node *a = new Node(10);//a stores the adress of a node
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node * e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // display(a);
    // displayrec(a);
    revDisplay(a);
    // cout<<size(a);
    //iterative method is better
    
}