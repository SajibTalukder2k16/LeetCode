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
    bool isPalindrome(ListNode* head) {
        ListNode * temp = head;
        vector<int>vec;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int sz=vec.size();
        int half = sz/2;
        for(int i=0,j=sz-1;i<half;i++,j--){
            if(vec[i]!=vec[j])
                return false;
        }
        return true;
        
    }
};