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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v ;
        recursive_call(root,v);
        return v;
    }

    void recursive_call(TreeNode* root,vector<int> &v){
        if(!root)
            return;
        recursive_call(root->left,v);
        v.push_back(root->val);
        recursive_call(root->right,v);
        // v.push_back(root->val);
    }
};
