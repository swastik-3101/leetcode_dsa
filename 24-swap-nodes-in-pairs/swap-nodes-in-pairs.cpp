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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next == nullptr){
            return head;
        } 
        ListNode* dummyhead = head->next;
        ListNode* prev = nullptr;
        while(head!=nullptr && head->next!=nullptr){
            ListNode* nxt = head->next;
            ListNode* newpair = nxt->next;
            //swapcurr
            head->next = nxt->next;
            nxt->next = head;
            if(prev!=nullptr){
                prev->next = nxt;
            }
            prev= head;
            head = newpair;

        }
        return dummyhead;
    }
};