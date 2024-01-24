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
    bool palindromeChecker(vector<int>& nums){
        int count=0;
         for(int i=0;i<9;i++){
             if(nums[i]%2==1) count++;
             if(count>1) return false;
         }
         return true;
    }
    int solver(TreeNode* root,vector<int> nums){
        if(!root->left && !root->right){
            nums[root->val-1]++;
            return palindromeChecker(nums)?1:0;
        }
        nums[root->val-1]++;
        int left=0,right=0;
        if(root->left) left=solver(root->left,nums);
        if(root->right) right=solver(root->right,nums);
        return left+right;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> nums(9,0);
        return solver(root,nums);
    }
};