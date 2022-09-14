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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        ListNode* oddHead = head;
        ListNode* evenHead = head->next;
        ListNode* meetingPoint = evenHead;
        ListNode* ret = oddHead;
        head=head->next->next;
        while(head){
            oddHead->next=head;
            oddHead=oddHead->next;
            head = head->next;
            evenHead->next=head;
            evenHead = evenHead->next;
            if(head!=NULL)
                head = head->next;
        }
        oddHead->next = meetingPoint;
        return ret;
    }
};