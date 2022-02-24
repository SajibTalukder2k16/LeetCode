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
        while(head!=NULL)
        {
            if(head->val!=ret->val){
                ret->next=head;
                ret=ret->next;
            }
            head=head->next;
        }
        ret->next=NULL;
        return res;
    }
};

///Previous Solution
/*

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;

        ListNode * ret = head;
        ListNode *res=ret;
        //ret->next=NULL;
        map<int,bool>mp;
        mp[head->val]=true;
        
        head=head->next;
        
        while(head!=NULL)
        {
            if(mp[head->val]==false)
            {
                mp[head->val]=true;
                ret->next=head;
                ret=ret->next;
            }
            head=head->next;
        }
        ret->next=NULL;
        return res;
    }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ret=head;
        if(head==NULL)
            return head;
        while(head->next!=NULL)
        {
            ListNode *nxt=head->next;
            while(nxt->val==head->val)
            {
                if(nxt->next==NULL)
                {
                    nxt=NULL;
                    break;
                }
                nxt=nxt->next;
                
            }
            head->next=nxt;
            if(nxt==NULL)
                break;
            head=head->next;
        }
        return ret;;
    }
};
*/