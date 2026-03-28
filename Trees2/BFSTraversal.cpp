#include <iostream>
#include<algorithm>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void PreOrder(Node *root)
{   
    if(root == NULL) return ;
    cout<<root->val<<" ";
    PreOrder(root->left);
    PreOrder(root->right);

}

int sumTree(Node * root){
    if(root == NULL){
        return 0;
    }
 int ans = root->val + sumTree(root->left) + sumTree(root->right);
    return ans;
}

int size(Node * root){
    if(root == NULL) return 0;
   
    return 1 + size(root->left) + size(root->right);
}

int maxVal(Node* root){
    if(root == NULL) return INT8_MIN;
    return  max(root->val,max(maxVal(root->left),maxVal(root->right)));
}

int level(Node * root){
    if(root == NULL) return 0;

    return 1+ max(level(root->left),level(root->right));
}

void inOrder(Node *root)
{   
    if(root == NULL) return ;
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);

}


void    postOrder(Node *root)
{   
    if(root == NULL) return ;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}

void nthLevel(Node *root,int curr,int level)
{   
    if(root == NULL) return ;
    if(curr == level) {
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->right,curr+1,level);
    nthLevel(root->left,curr+1,level);

}

void levelOrder(Node * root){
    int n = level(root);
    for(int i = 1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
}


int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;


    // nthLevel(a,0,2);

    levelOrder(a);


   
}