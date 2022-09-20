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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL)
            return NULL;
        if(l2==NULL)
            return l1;
        if(l1==NULL)
            return l2;
        ListNode* ret = l1;
        int remainder = 0;
        ListNode* prevl1 = l1,*prevl2=l2;
        while(l1!=NULL && l2!=NULL){
            prevl1 = l1;
            prevl2 = l2;
            l1->val +=l2->val+remainder;
            remainder=l1->val/10;
            l1->val=l1->val-remainder*10;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1==NULL && l2==NULL && remainder==0)
            return ret;
        else if(l1==NULL && l2==NULL && remainder!=0)
        {
            ListNode* last = new ListNode();
            last->val=remainder;
            last->next = NULL;
            prevl1->next=last;
            return ret;
        }
        else if((l1==NULL || l2==NULL) && remainder ==0){
            if(l1==NULL)
                prevl1->next = l2;
        }
        else if(l2==NULL && remainder!=0){
            while(remainder!=0 && l1!=NULL){
                prevl1=l1;
                l1->val +=remainder;
                remainder=l1->val/10;
                l1->val=l1->val-remainder*10;
                l1=l1->next;
            }
        }
        else if(l1==NULL && l2!=NULL && remainder!=0){
            l1=l2;
            prevl1->next=l1;
            prevl1=prevl1->next;
            while(remainder!=0 && l1!=NULL){
                prevl1=l1;
                l1->val +=remainder;
                remainder=l1->val/10;
                l1->val=l1->val-remainder*10;
                l1=l1->next;
            }
        }
        if(remainder){
            ListNode* last = new ListNode();
            last->val=remainder;
            last->next = NULL;
            prevl1->next=last;
        }
        return ret;
    }
};