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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
           return head;
        }
        ListNode *ptr1=NULL,*ptr2=head,*ptr3=head->next;
        do{
            ptr2->next=ptr1;
            ptr1=ptr2;
            ptr2=ptr3;
            ptr3=ptr3->next;
            ptr2->next=ptr1;
        }while(ptr3!=NULL);
        return ptr2;
    }
};