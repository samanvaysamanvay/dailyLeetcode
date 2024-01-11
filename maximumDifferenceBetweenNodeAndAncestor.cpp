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
    int solver(TreeNode* root,int mini,int maxi){
        if(!root) return (maxi-mini);

        if(root->val>maxi) maxi=root->val;
        if(root->val<mini) mini=root->val;

        return max(solver(root->left,mini,maxi),solver(root->right,mini,maxi));
    }
    int maxAncestorDiff(TreeNode* root) {
        return solver(root,INT_MAX,INT_MIN);
    }
};