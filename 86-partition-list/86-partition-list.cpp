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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode();
        ListNode* smallHead = small;
        ListNode* big = new ListNode();
        ListNode* bigHead = big;
        while(head!=NULL){
            if(head->val<x){
                small->next = new ListNode();
                small=small->next;
                small->val=head->val;
                ListNode* temp = NULL;
                small->next=temp;
            }
            else{
                big->next = new ListNode();
                big=big->next;
                big->val=head->val;
                ListNode* temp = NULL;
                big->next=temp;
            }
            head=head->next;
        }
        bigHead=bigHead->next;
        smallHead=smallHead->next;
        small->next=bigHead;
        if(smallHead!=NULL)
            return smallHead;
        else
            return bigHead;
    }
};