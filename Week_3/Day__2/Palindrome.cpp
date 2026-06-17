class Solution {
public:
    bool isPalindrome(ListNode* head) {
       ListNode* slow=head;
       ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=slow;
        while(curr){
            ListNode * nexty=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexty;
        }
        ListNode* first=head;
        ListNode* second=prev;
        while(second){
            if(first->val!=second->val) return false;
            second=second->next;
            first=first->next;
        }
        return true;

    }
};