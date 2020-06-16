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
     * @param root: param root: The root of the binary search tree
     * @param k1: An integer
     * @param k2: An integer
     * @return: return: Return all keys that k1<=key<=k2 in ascending order
     */

    string serialize(TreeNode * root) {
        // write your code here
        if(root == NULL)
            return "-2147483648";
        return to_string(root->val)+' '+serialize(root->left)+' '+serialize(root->right);


    }

    vector<int> searchRange(TreeNode * root, int k1, int k2) {
        // write your code here
        string s = serialize(root);
        stringstream stream(s);
        int number;

        vector<int> res;

        while(stream >> number)
            res.push_back(number);
        sort(res.begin(),res.end());

        vector<int> result;

        for(int i=0;i<res.size();i++){
            cout<<res[i];
            if(res[i]>=k1&&res[i]<=k2)
            {
                result.push_back(res[i]);
                cout<<"inside here";
            }

        }

        return result;
    }
};
