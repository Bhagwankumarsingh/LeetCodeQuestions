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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<int>store;
        queue<TreeNode*>q;
        int length=0;
        q.push(root);
         priority_queue <long long, vector<long long>, greater<long long> > pq;
        while(!q.empty()){
            long long sum=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* f=q.front();
                q.pop();
                sum+=f->val;
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            length++;
            pq.push(sum);
            if(length>k){
                pq.pop();
            }
        }
        if(k>length) return -1;
       return pq.top();
    }
};