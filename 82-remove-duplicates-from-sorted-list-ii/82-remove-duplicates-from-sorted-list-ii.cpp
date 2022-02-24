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
        if(head==NULL)
            return head;

        ListNode* ret=head;//new ListNode();
       // ret->val=head->val;
        ListNode* res=ret;
        ListNode* prev=new ListNode();
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
                    //cout<<head->val<<endl;
                    temp=head,head=head->next;
                    
                    if(head==NULL)
                        break;
                }
                    
                ret->val=-200;
                //cout<<"Ret: "<<ret->val<<endl;
                head=temp;
            }
            head=head->next;
        }
        //cout<<ret->val<<endl;
        if(ret==res && ret->val==-200)
            res=NULL;
        if(ret->val==-200)
            ret=NULL,prev->next=NULL;
        else
            ret->next=NULL;
        return res;
        
    }
};

