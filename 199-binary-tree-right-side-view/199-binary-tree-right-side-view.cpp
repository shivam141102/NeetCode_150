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

//USING DFS      TC:O(n)    SC:O(1)
class Solution {
public:
    void helper(TreeNode* root,int level,vector<int> &result){
        if(root==NULL)
            return;
        
        if(level==result.size())
            result.push_back(root->val);
        helper(root->right,level+1,result);
        helper(root->left,level+1,result);
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        int level=0;
        helper(root,level,result);
        return result;
    }
};


//USING BFS      TC:O(n)    SC:O(n)

// class Solution {
// public:
// vector<int> rightSideView(TreeNode* root) {
//     if(root==NULL){
//         return {};
//     }
//     queue<TreeNode*> q;
//     q.push(root);
    
//     vector<int> result;
    
//     while(!q.empty()){
//         int size=q.size();
        
//         for(int i=1;i<=size;i++){
//             TreeNode* Node=q.front();
//             q.pop();
//             if(i==size){
//                 result.push_back(Node->val);
//             }
            
//             if(Node->left) q.push(Node->left);
//             if(Node->right) q.push(Node->right);
//         }
//     }
//     return result;
// }
// };