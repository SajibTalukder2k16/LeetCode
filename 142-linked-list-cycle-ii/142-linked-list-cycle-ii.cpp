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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fastPointer = head;
        ListNode* slowPointer = head;
        while(fastPointer!=NULL){
            if(fastPointer->next!=NULL && fastPointer->next->next!=NULL)
                fastPointer=fastPointer->next->next;
            else{
                fastPointer=NULL;
                return fastPointer;
            } 
            slowPointer=slowPointer->next;
            if(fastPointer==slowPointer && fastPointer!=NULL)
                break;
        }
        ListNode* tracer=head;
        while(tracer!=slowPointer){
            slowPointer=slowPointer->next;
            tracer=tracer->next;
        }
        return tracer;
    }
};