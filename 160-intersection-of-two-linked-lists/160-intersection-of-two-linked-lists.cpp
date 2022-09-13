/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pt1=headA,*pt2=headB;
        int cntA=0,cntB=0;
        while(pt1!=pt2 ){
            if(pt1==NULL)
                pt1=headB;
            else
                pt1=pt1->next;
            if(pt2==NULL)
                pt2=headA;
            else
                pt2=pt2->next;
        }
        return pt1;
    }
};