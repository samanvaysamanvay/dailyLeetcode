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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* ptr=head;
        while(ptr!=NULL){
              count++;
              ptr=ptr->next;
        }
        int delnode=count-n;
        if(delnode==0){
           return head=head->next;
        }
        ptr=head;
        int i=0;
        while(i<delnode-1){
            ptr=ptr->next;
            i++;
        } 
        ptr->next=ptr->next->next;
        return head;
    }
};