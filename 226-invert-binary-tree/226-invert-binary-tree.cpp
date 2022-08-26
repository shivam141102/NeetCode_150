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
//Simply swaping left and right node and calling inverttree function on root->left and root->right
// Time: O(n)
// Space: O(n)

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        TreeNode *temp=root->left;
        root->left=root->right;
        root->right=temp;
        
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};