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
    bool dfs(TreeNode* t1 , TreeNode* t2){
        if(t1==NULL && t2==NULL) return true;
        if(t1==NULL || t2==NULL) return false;
        bool lt,rt,comp;
        lt=dfs(t1->left,t2->right);
        rt=dfs(t1->right,t2->left);
        comp=(t1->val==t2->val);
        
        return lt&&rt&&comp;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return dfs(root->left,root->right);
    }
};