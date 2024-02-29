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
    bool isEvenOddTree(TreeNode* root) {
         queue<TreeNode*> q;
         q.push(root);
         q.push(nullptr);
         int level=0;
         while(q.front()){
              while(q.front()){
                  if(level%2==0){
                    if(q.front()->val%2==1){
                        if(q.front()->left) q.push(q.front()->left);
                        if(q.front()->right) q.push(q.front()->right);
                        int temp=q.front()->val;
                        q.pop();
                        if(q.front()){ if(q.front()->val<=temp) return false;}
                    }
                    else{
                        return false;
                    }
                    }
                    else{
                    if(q.front()->val%2==0){
                        if(q.front()->left) q.push(q.front()->left);
                        if(q.front()->right) q.push(q.front()->right);
                        int temp=q.front()->val;
                        q.pop();
                        if(q.front()){ if(q.front()->val>=temp) return false;}
                    }
                    else{
                        return false;
                    }             
                    } 
              }
                    level++;
                    q.pop();
                    q.push(nullptr); 
         }
         return true;
    }
};