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
    int maxDiameter=0;
    int solver(TreeNode* root){
        if(!root) return 0;

        int leftbottom=solver(root->left);
        int rightbottom=solver(root->right);
        
        maxDiameter=max(maxDiameter,leftbottom+rightbottom);

        return max(leftbottom+1,rightbottom+1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int val=solver(root);
        return maxDiameter;
    }
};