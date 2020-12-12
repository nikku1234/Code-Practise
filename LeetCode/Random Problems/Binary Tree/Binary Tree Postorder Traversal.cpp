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
        vector<int> value;
        recursive_call(root, value);
        return value;
    }
    void recursive_call(TreeNode* root, vector<int> &value){
        if(!root)
            return;
        recursive_call(root->left,value);
        recursive_call(root->right,value);
        value.push_back(root->val);
    }
};
