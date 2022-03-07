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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
            return NULL;
        ListNode* ret=new ListNode();
        ListNode* res=ret;
        while(list1!=NULL&& list2!=NULL){
            if(list1->val <= list2->val){
                ret->val=list1->val;
                ListNode* temp= new ListNode();
                ret->next=temp;
                ret=ret->next;
                list1=list1->next;
            }
            else{
                ret->val=list2->val;
                ListNode* temp= new ListNode();
                ret->next=temp;
                ret=ret->next;
                list2=list2->next;
            }
        }
        if(list1==NULL){
            ret->val=list2->val;
            ret->next=list2->next;
        }
        if(list2==NULL){
            ret->val=list1->val;
            ret->next=list1->next;
        }
        return res;
    }
};