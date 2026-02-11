#include<iostream>
using namespace std;
class Node{ //userDefined Data type
   public: 
    int val;
    Node * next;
    Node(int val){
        this->val = val;
        this->next = next;
    }
};
class LinkedList{ //user Defined DataStructure
    Node * head ;
    Node * tail ;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){
        
    }
};
int main() {
    LinkedList ll = new LinkedList();//empty at first

    ll.insertAtEnd(10);//now it has value 10
    ll.insertAtEnd(20); // now it has value 10 , 20

    ll.display();
}