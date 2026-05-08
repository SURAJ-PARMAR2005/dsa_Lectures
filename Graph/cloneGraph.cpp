// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     vector<Node *>  nodeRegister;

//     void dfs(Node * actual, Node * cloned){
//       for(auto neighbor : actual->neighbors){
//         if(not nodeRegister[neighbor->val]){
//             // not registered
//             //create krlo uss node ko
//             Node * newNode = new Node(neighbor->val);
//             nodeRegister[newNode->val] = newNode;
//             cloned->neighbors.push_back(newNode);
//             dfs(neighbor,newNode);
//         }
//         else{
//             cloned->neighbors.push_back(nodeRegister[neighbor->val]);
//         }
//       }
//     }
//     Node* cloneGraph(Node* node) {
//         if(node  == NULL ) return NULL;
//         Node * clone = new Node(node->val);
//         nodeRegister.resize(110,NULL);//this array contains refernce to current node 
//         nodeRegister[clone->val] = clone;
//         // now aplly dfs
//         dfs(node,clone);
//         return clone;
//     }
// };