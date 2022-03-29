/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>a;
        queue<TreeNode*>q;
        
        if(root==NULL){
            return a;
        }
        
        
        
        q.push(root);
        
        while(!q.empty()){
            
            int n=q.size();
            vector<int>p;
            
            for(int i=0;i<n;i++){
                
                TreeNode*node=q.front();
                q.pop();
                
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                p.push_back(node->val);
            }
            if(p.size()>0){
                a.push_back(p);
            }
            
        }
        
        return a;
        
    }
};
