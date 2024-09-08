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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,nullptr);
        ListNode* ptr=head;
        int count=0;
        while(ptr!=nullptr){
            count++;
            ptr=ptr->next;
        } 
        int listsWithExtraNodes=count%k,noOfElements=count/k;
        ptr=head;
        for(int i=0;i<listsWithExtraNodes;i++){
            ans[i]=ptr;
            for(int j=0;j<noOfElements;j++){
                ptr=ptr->next;
            }
            ListNode* temp=ptr;
            ptr=ptr->next;
            temp->next=nullptr;
        }
        for(int i=listsWithExtraNodes;i<k;i++){
            ans[i]=ptr;
            for(int j=0;j<noOfElements-1;j++){
                ptr=ptr->next;
            }
            ListNode* temp=ptr;
            if(ptr!=nullptr)
            ptr=ptr->next;
            if(temp!=nullptr)
            temp->next=nullptr;
        }
        return ans;
    }
};