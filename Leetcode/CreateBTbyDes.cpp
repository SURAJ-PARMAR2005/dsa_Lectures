
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& des) {
        int n = des.size();
        unordered_map<int,TreeNode * > mp;
        unordered_set<int> st;
       
        for(int i = 0;i<n;i++){
            int par = des[i][0];
            int child = des[i][1];
            bool isLeft = des[i][2];
            st.insert(child);
            if(mp.find(par) != mp.end() && mp.find(child) != mp.end()){
                TreeNode * parent = mp[par];
                TreeNode * childeren = mp[child];
                if(isLeft){
                    parent->left = childeren;
                }
                else{
                    parent->right = childeren;
                }
            }
            else if(mp.find(par) != mp.end()){
                //par already exist , then child will not exists
                TreeNode * a = mp[par];
                TreeNode * childeren = new TreeNode(child);
              
                if(isLeft){
                    a->left = childeren;
                    mp[childeren->val] = childeren;
                }
                else {
                    a->right = childeren;
                    mp[childeren->val] = childeren;
                }
            }
            else if(mp.find(child) != mp.end()){
                //child exists but par does not exist;
    
                TreeNode * a = mp[child];
                TreeNode * parent = new TreeNode(des[i][0]);

                if(isLeft){
                    parent->left = a;
                    mp[parent->val] = parent;
                }
                else{
                parent->right = a;
                mp[parent->val] = parent;
                }
            }

            else{
                //both does not exist;
                TreeNode * parent = new TreeNode(par);
                TreeNode * children = new TreeNode(child);
                
                if(isLeft){
                    parent->left = children;
                    mp[parent->val] = parent;
                    mp[children->val] = children; 
                }
                else{
                    parent->right = children;
                    mp[parent->val] = parent;
                    mp[children->val] = children; 
                }
            }
        }
        TreeNode * root = new TreeNode(-1);
        for(auto ele : mp){
            if(!st.count(ele.first)){
               root = ele.second;
            }
        }
        return root;
    }
};