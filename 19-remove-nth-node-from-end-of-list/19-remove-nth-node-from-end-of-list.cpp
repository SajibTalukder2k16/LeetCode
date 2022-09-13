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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* tNode = head;
        while(tNode!=NULL)
        {
            tNode=tNode->next;
            cnt++;
        }
        int target = cnt-n; // though target node is cnt-n+1 but I will make link from cnt-n to cnt-n+2
        tNode=head;
        cnt=1;
        if(target==0){
            if(head->next!=NULL)
                head=head->next;
            else
                head=NULL;
            return head;
        }
        while(cnt!=target){
            tNode=tNode->next;
            cnt++;
        }
        tNode->next=tNode->next->next;
        return head;
        
    }
};