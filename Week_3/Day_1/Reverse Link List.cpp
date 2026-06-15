class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* first=head->next;
        ListNode* newHead=reverseList(first);
           first->next=head;
           head->next=NULL;
           return newHead;
    }
    
};