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
    ListNode* swapNodes(ListNode* head, int k) {
        stack<ListNode*>NodesOfStack;
        ListNode* current=head;
        int cnt=0;
        while(current!=NULL){
            NodesOfStack.push(current);
            current=current->next;
            cnt++;
        }
        current=head;
        if(k!=cnt)
            k=k%cnt;
        for(int index=1;index<=k;index++){
            if(index==k){
                int val=current->val;
                ListNode* temp=NodesOfStack.top();
                current->val=temp->val;
                temp->val=val;
                break;
            }
            NodesOfStack.pop();
            current=current->next;
        }
        return head;
    }
};