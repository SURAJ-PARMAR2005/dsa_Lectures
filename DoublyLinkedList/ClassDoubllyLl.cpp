#include<iostream>
using namespace std;

class Node {
    public: 
        int val;
        Node * next;
        Node * prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void displayRev(Node * tail){
    while(tail){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
void display(Node * head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
};

class DLL
{
public: // user Defined DataStructure
    Node *head;
    Node *tail;
    int size;
    DLL()
    {
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid Index" << endl;
        }
        else if (idx == 0)
        {
            insertAtHead(val);
            
        }
        else if(idx == size){
            insertAtEnd(val); 
        }
        else{
            Node * t = new Node(val);
            Node * temp = head;
            for(int i = 1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx < 0 || idx>=size) {
            cout<<"Ivalid Idx";
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size-1) return tail->val;
        else{
            Node * temp = head;
          for(int i = 1;i<=idx;i++){
            temp = temp->next;
          }
          return temp->val;

        }

    }


    void deleteAthead(){
        if(size == 0){
            cout<<"List is Empty"<<endl;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
     if(size == 0){
            cout<<"List is Empty"<<endl;
        }
        Node * temp = head;
        while(temp ->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx){
        if(idx<0 || idx >=size){
            cout<<"Invalid Idx";
            return;
        }
        else if(idx == 0) return deleteAthead();
        else if(idx == size-1) return deleteAtTail();
        else{
            Node * temp = head;
            for(int i =1;i<idx;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};
int main () {
   DLL list;
   list.insertAtEnd(20);
   list.insertAtEnd(30);
   list.insertAtEnd(40);
   list.insertAtEnd(50);
   list.insertAtEnd(60);

   list.display();

   list.insertAtHead(10);
   list.insertAtIdx(1,60);

   list.display();


}