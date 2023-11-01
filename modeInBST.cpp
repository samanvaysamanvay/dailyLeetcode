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
    unordered_map<int,int> mp;
    void solver(TreeNode* root){
        if(root==nullptr) return;
        mp[root->val]++;
        solver(root->left);
        solver(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        solver(root);
        vector<int> nums;
        int max=INT_MIN;
        for(auto i:mp){
            if(i.second>=max) max=i.second;
        }
        for(auto i:mp){
            if(i.second==max) nums.push_back(i.first);
        }
        return nums;
    }
};