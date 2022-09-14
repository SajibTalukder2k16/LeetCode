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
        ListNode* prev = sentinel;
        ListNode* cur = head;
        ListNode* toDelete = NULL;
        while(cur!=NULL){
            if(cur->val==val){
                prev->next = cur->next;
                toDelete = cur;
            }else{
                prev=cur;
            }
            cur = cur->next;
            if(toDelete!=NULL)
            {
                delete toDelete;
                toDelete = NULL;
            }
        }
        head = sentinel->next;
        delete sentinel;
        return head;
    }
};