class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)
        return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && n){
            fast=fast->next;
            n--;
        }
        if(!fast && n>0) return head;
        if(!fast) return head->next;
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* del=slow->next;
        
        slow->next=slow->next->next;
        delete del;
        return head;
    }
};