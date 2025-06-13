class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0); 
        dummy->next = head;
        ListNode* curr = dummy;

        for (int i = 1; i < left; i++) {
            curr = curr->next;
        }

        ListNode* prev = curr;
        ListNode* tail = curr->next; 

        
        for (int i = 0; i < right - left; i++) {
            ListNode* nxt = tail->next;
            tail->next = nxt->next;
            nxt->next = prev->next;
            prev->next = nxt;
        }

        return dummy->next;
    }
};
