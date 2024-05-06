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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* ptr1=head;
        while(ptr1!=nullptr){
           st.push(ptr1);
           ptr1=ptr1->next;  
        } 
        ListNode* ans=nullptr;
        while(!st.empty()){
           if(ans==nullptr){
               ans=st.top();
               st.pop();
           }
           else{
               while(!st.empty() && st.top()->val<ans->val){
                   st.pop();
               }
               if(!st.empty()){
               ListNode* temp;
               st.top()->next=ans;
               temp=st.top();
               st.pop();
               ans=temp;
               }
           }
        }
        return ans;
    }  
};