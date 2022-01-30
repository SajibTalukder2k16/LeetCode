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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        vector<ListNode*>vec;
        while(temp!=NULL)
        {
            vec.push_back(temp);
            temp=temp->next;
        }
        int sz=vec.size();
        if(sz==1)
        {
            delete head;
            return NULL;
        }
        if(sz==2)
        {
            if(n==1)
            {
                temp=head->next;
                head->next=NULL;
                delete temp;
                return head;
            }
            else{
                temp=head->next;
                delete head;
                head=temp;
                return head;
            }
        }
        if(n==1)
        {
            temp=vec[sz-2];
            temp->next=NULL;
            delete vec[sz-1];
            return head;
        }
        if(n==sz)
        {
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
            
        temp=vec[sz-n-1];
        temp->next=vec[sz-n+1];
        // cout<<vec.size()<<endl;
        return head;
        
    }
};