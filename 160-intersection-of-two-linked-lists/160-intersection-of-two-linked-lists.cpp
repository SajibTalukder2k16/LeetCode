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
        while(pt1!=NULL){
            pt1=pt1->next;
            cntA++;
        }
        while(pt2!=NULL){
            pt2=pt2->next;
            cntB++;
        }
        pt1=headA;
        pt2=headB;
        int dif = abs(cntA-cntB);
        if(cntB>cntA){
            for(int i=0;i<dif;i++)
                pt2=pt2->next;
        }
        else if(cntA>cntB){
            for(int i=0;i<dif;i++)
                pt1=pt1->next;
        }
        while(pt1!=NULL){
            if(pt1==pt2)
                return pt1;
            pt1=pt1->next;
            pt2=pt2->next;
        }
        return NULL;
    }
};