vector<int> preorderTraversal(TreeNode* root) {

vector<int> v;
if(!root)
    return v;
TreeNode* temp = root;
stack<TreeNode*> s;
s.push(root);
while(!s.empty()){
    temp = s.top();
    s.pop();
    v.push_back(temp->val);
    if(temp->right)
        s.push(temp->right);
    if(temp->left)
        s.push(temp->left);
}
return v;
}
