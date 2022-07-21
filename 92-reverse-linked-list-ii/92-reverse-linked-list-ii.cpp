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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int cnt=1;
        ListNode* temp = head;
        ListNode* Left;
        stack<int> st;
        while(cnt!=right+1){
            if(cnt>=left){
                st.push(temp->val);
            }
            if(cnt==left){
                Left=temp;
            }
            temp=temp->next;
            cnt++;
        }
        while(!st.empty()){
            Left->val=st.top();
            Left=Left->next;
            st.pop();
        }
        return head;
        
    }
};