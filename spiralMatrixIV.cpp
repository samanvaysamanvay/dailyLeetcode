/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));

        int i = 0,j = 0,dir = 1,top = 0,bottom = m,left = 0,right = n;
        
        while(head){
            if(dir == 1){
            while(head && j < right){
                ans[i][j] = head->val;
                j++;
                head = head->next;      
                }
                j--;
                i++;
                dir = 2;
                right--;
            }
            if(dir == 2){
            while(head && i < bottom){
                ans[i][j] = head->val;
                i++;
                head = head->next;      
                }
                i--;
                j--;
                dir = 3;
                bottom--;
            } 
            if(dir == 3){
            while(head && j >= left){
                ans[i][j] = head->val;
                j--;
                head = head->next;      
                }
                j++;
                i--;
                dir = 4;
                left++;
            }
            if(dir == 4){
                top++;
            while(head && i >= top){
                ans[i][j] = head->val;
                i--;
                head = head->next;      
                }
                i++;
                j++;
                dir = 1;
            }                                   
        }
        return ans;
    }
};