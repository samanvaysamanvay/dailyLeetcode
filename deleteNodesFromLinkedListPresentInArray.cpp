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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int> mp;

        for(int i = 0;i<nums.size();i++) mp[nums[i]]++;
        ListNode* dummy = new ListNode(-1,head);

        ListNode* prev = dummy;
        while(head){
            if(mp[head->val] != 0) 
                prev->next = head->next;
            else 
                prev = prev->next;
            head = head->next;
        }
        return dummy->next;
    }
};