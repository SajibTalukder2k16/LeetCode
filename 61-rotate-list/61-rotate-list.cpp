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
        ListNode* cur=head;
        ListNode* prev=head;
        int cnt=0;
        while(cur!=NULL)
        {
            cnt++;
            prev=cur;
            cur=cur->next;
        }
        if(cnt!=0)
            k%=cnt;
        else{
            k=0;
            return head;
        }
            
        if(k!=0){
            prev->next=head;
            k=cnt-k;
            cnt=1;
            cur=head;
            while(cnt!=k){
                cur=cur->next;
                cnt++;
            }
            head=cur->next;
            cur->next=NULL;
        }
        return head;
        
    }
};