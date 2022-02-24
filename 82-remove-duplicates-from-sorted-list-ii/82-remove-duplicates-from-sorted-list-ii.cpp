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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;

        ListNode* ret=head;
        ListNode* res=ret;
        ListNode* prev=new ListNode();
        prev->next=res;
        head=head->next;
        while(head!=NULL)
        {
            if(head->val!=ret->val){
                if(ret->val==-200)
                {
                    ret->val=head->val;
                }
                else{
                    prev=ret;
                    ret->next=head;
                    ret=ret->next; 
                }
                
            }
            else{
                ListNode* temp=head;
                while(head->val==ret->val)
                {
                    temp=head,head=head->next;   
                    if(head==NULL)
                        break;
                }
                    
                ret->val=-200;
                head=temp;
            }
            head=head->next;
        }
        if(ret->val==-200)
        {
            if(res==prev->next)
                res=NULL;
            prev->next=NULL;
        }
            
        else
            ret->next=NULL;
        return res;
        
    }
};

