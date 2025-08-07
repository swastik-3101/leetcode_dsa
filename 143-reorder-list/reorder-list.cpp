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
    void reorderList(ListNode* head) {
        stack<ListNode*> s;
        ListNode* curr = head;
        int length =0;
        while(curr){
            s.push(curr);
            curr= curr->next;
            length++;
        }
        curr = head;
        for(int i =0;i<length/2;i++){
            ListNode* temp = curr->next;
            curr->next = s.top();
            s.pop();
            curr->next->next = temp;
            curr=curr->next->next;
        }
        curr->next = nullptr;
        


    }
};