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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        long long ans=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            long long first, last;
            long long size = q.size();
            long long val = q.front().second;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front().first;
                long long vals=q.front().second-val;
                q.pop();
                if(i==0)first = vals;
                if(i==size-1)last = vals;
                if(node->left)q.push({node->left,vals*2+1});
                if(node->right)q.push({node->right,vals*2+2});
            }
            ans=max(ans,(last-first+1));
        }
        return ans;
    }
};
