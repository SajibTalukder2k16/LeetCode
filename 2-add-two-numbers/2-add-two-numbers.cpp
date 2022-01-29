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
        int last_value=0;
        ListNode* h1=l1;
        ListNode* h2=l2;
        while(l1!=NULL && l2!=NULL)
        {
           // cout<<l1->val<<" "<<l2->val<<endl;
            int result=l1->val+l2->val+last_value;
            last_value=result/10;
            result%=10;
            l1->val=result;
            l2->val=result;
            if(l1->next==NULL && l2->next==NULL && last_value!=0)
            {
                ListNode* temp= new ListNode();
                temp->next=NULL;
                temp->val=last_value;
                l1->next=temp;
                return h1;
            }
            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=NULL)
        {
            while(l1!=NULL)
            {
                int result=l1->val+last_value;
                last_value=result/10;
                result%=10;
                l1->val=result;
                if(l1->next==NULL && last_value!=0)
                {
                    ListNode* temp= new ListNode();
                    temp->next=NULL;
                    temp->val=last_value;
                    l1->next=temp;
                    return h1;
                }
                l1=l1->next;
            }
            return h1;
        }
        
        if(l2!=NULL)
        {
            while(l2!=NULL)
            {
                int result=l2->val+last_value;
                last_value=result/10;
                result%=10;
                l2->val=result;
                // cout<<l2->val<<endl;
                if(l2->next==NULL && last_value!=0)
                {
                    ListNode* temp= new ListNode();
                    temp->next=NULL;
                    temp->val=last_value;
                    l2->next=temp;
                    return h2;
                }
                l2=l2->next;
            }
            return h2;
        }
        
    return h1;
        
    }
};