#include <iostream>
#include<algorithm>
#include<queue>
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

void levelOrderQueue(Node * root){
    queue<Node *> q;
    q.push(root);
    while(q.size() > 0){
        Node * temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        //interchange above two line for reverse;
    }
        cout<<endl;
}


void levelOrder(Node * root){
    int n = level(root);
    for(int i = 1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
}

Node * construct(vector<int> v){
    int n = v.size();
    queue<Node * > q;
    Node * root = new Node(v[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size() > 0 && i<n){
        Node * temp = q.front();
        q.pop();
        Node * l;
        Node * r;
        if(v[i] != INT8_MIN){
            l = new Node (v[i]);
        }
        else {
            l = NULL;
        }

        if(j != n && v[j] != INT8_MIN){
            r = new Node (v[j]);
        }
        else {
            r = NULL;
        }
        temp->left = l;
        temp->right  = r;
        if(l != NULL){
            q.push(l);
        }
        if(r != NULL) q.push(r);

        i+=2;
        j += 2;   
    }
    return root;
}

int main()
{   
    vector<int> v = {1,2,3,4,5,INT8_MIN,6,INT8_MIN,INT8_MIN,7,8,9};
//construct
    Node * root = construct(v);
   
    levelOrderQueue(root);
}