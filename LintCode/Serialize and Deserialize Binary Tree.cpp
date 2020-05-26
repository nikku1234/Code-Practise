/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */


class Solution {
public:
    /**
     * This method will be invoked first, you should design your own algorithm
     * to serialize a binary tree which denote by a root node to a string which
     * can be easily deserialized by your own "deserialize" method later.
     */
    string serialize(TreeNode * root) {
        // write your code here
        if(root == NULL)
            return "#";
        return to_string(root->val)+','+serialize(root->left)+','+serialize(root->right);


    }

    /**
     * This method will be invoked second, the argument data is what exactly
     * you serialized at method "serialize", that means the data is not given by
     * system, it's given by your own serialize method. So the format of data is
     * designed by yourself, and deserialize it here as you serialize it in
     * "serialize" method.
     */
    TreeNode * deserialize(string &data) {
        // write your code here
        if(data=="#")
            return NULL;

        stringstream s(data);
        return makeDeserialize(s);
    }

    TreeNode* makeDeserialize(stringstream &s){

        string str;
        getline(s,str,',');
        // getline(s,str,',');
        if(str == "#")
            return NULL;
        else{
            TreeNode* root = new TreeNode(stoi(str));
            // cout<<str<<"\n";
            root->left = makeDeserialize(s);
            root->right = makeDeserialize(s);
            return root;
        }

    }
};
