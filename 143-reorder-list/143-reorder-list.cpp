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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<int>vec;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int sz = vec.size();
        if(sz<3)
            return;
        temp=head->next;
        for(int i=1,j=sz-1,idx=1;idx<sz;idx++){
            if(idx&1){
                temp->val=vec[j];
                j--;
            }
            else{
                temp->val=vec[i];
                i++;
            }
            temp=temp->next;
        }
    }
};