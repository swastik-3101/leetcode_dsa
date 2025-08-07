class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            
            
            head=nullptr;
            return head;
        }

        ListNode* trav = head;
        int size = 0;
        while (trav != nullptr) {
            trav = trav->next;
            size++;
        }

        int pos = size / 2;

        ListNode* p = head;
        for (int i = 0; i < pos - 1; i++) {
            p = p->next;
        }

        ListNode* temp = p->next;
        p->next = p->next->next;
        delete temp;

        return head;
    }
};
