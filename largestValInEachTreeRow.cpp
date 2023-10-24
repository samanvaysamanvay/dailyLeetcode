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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> pq;
        vector<int> ans;
        if(root==nullptr) return ans;
        pq.push(root);
        ans.push_back(root->val);
        pq.push(nullptr);
        while(!pq.empty() && pq.front()!=nullptr){
            int maxval=INT_MIN;
              while(pq.front()!=nullptr){
                  if(pq.front()->left!=nullptr){
                   pq.push(pq.front()->left);
                   if(pq.front()->left->val>maxval) maxval=pq.front()->left->val;
                  }
                  if(pq.front()->right!=nullptr){
                    pq.push(pq.front()->right);
                    if(pq.front()->right->val>maxval) maxval=pq.front()->right->val;
                  } 
                  pq.pop();
              }
              ans.push_back(maxval);
              pq.pop();
              pq.push(nullptr); 
        }
        ans.pop_back();
        return ans;
    }
};