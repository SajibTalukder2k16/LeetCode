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
    ListNode* middleNode(ListNode* head) {
        ListNode* ret=head;
        ListNode* mid=head;
        while(head!=NULL){
            //cout<<mid->val<<" "<<head->val<<endl;
            head=head->next;
            if(head!=NULL){
                head=head->next;
                if(head==NULL)
                {
                    mid=mid->next;
                    ret=mid;
                    break;
                }
            }
            if(head==NULL){
                ret=mid;
                break;
            }
            mid=mid->next;
        }
        //cout<<mid->val<<endl;
        return ret;
        
        
    }
};