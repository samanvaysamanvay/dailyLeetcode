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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ptr=head->next;
        while(ptr!=nullptr){
            ListNode* temp=ptr->next;
            while(temp->val!=0){
                ptr->val+=temp->val;
                temp=temp->next;
            }
            ptr->next=temp->next;
            ptr=ptr->next;
        }
        return head->next;
    }
};