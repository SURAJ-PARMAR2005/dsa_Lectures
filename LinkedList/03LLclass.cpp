#include <iostream>
using namespace std;
class Node
{ // userDefined Data type
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{
public: // user Defined DataStructure
    Node *head;
    Node *tail;
    int size;
    LinkedList()
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
int main()
{
    LinkedList ll; // empty at first

    ll.insertAtEnd(10); // now it has value 10
    ll.display();

    ll.insertAtEnd(20); // now it has value 10 , 20

    ll.display();
    ll.insertAtEnd(30); // now it has value 10 , 20
    ll.insertAtEnd(40); // now it has value 10 , 20
    ll.display();
    ll.insertAtHead(50);
    ll.insertAtHead(60);
    ll.insertAtIdx(4,70);
    ll.display();
    ll.deleteAthead();
    ll.display();
    // cout << ll.size<<endl;
    // cout<<ll.getAtIdx(7);
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();

 
}