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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* sentinel  = new ListNode();
        sentinel->next = head;
        head=sentinel;
        while(sentinel!=NULL){
            if(sentinel->next!=NULL)
                if(sentinel->next->val==val){
                    sentinel->next = sentinel->next->next;
                    continue;
                }
            sentinel=sentinel->next;
        }
        return head->next;
    }
};