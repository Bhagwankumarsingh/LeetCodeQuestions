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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>st;
        TreeNode* curr=root;
        while(!st.empty() || curr){
            while(curr){
                ans.push_back(curr->val);
                st.push(curr);
                curr=curr->right;
            }
            if(!st.empty()){
                curr=st.top();
                st.pop();
                curr=curr->left;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};