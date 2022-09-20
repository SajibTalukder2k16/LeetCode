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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)
            return head;
        int cnt = 0;
        ListNode* ret = head;
        while(head->next!=NULL){
            cnt++;
            head=head->next;
        }
        cnt++;
        head->next = ret;
        head=ret;
        k%=cnt;
        cnt = cnt-k;
        while(cnt!=1){
            cnt--;
            head=head->next;
        }
        ret = head->next;
        head->next = NULL;
        return ret;
        
    }
};