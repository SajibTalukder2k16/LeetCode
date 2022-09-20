/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
        Node* ret = head;
        if(head==NULL){
            Node* add = new Node();
            add->val = insertVal;
            head = add;
            head->next = add;
            return head;
        }
        while(head){
            if( 
                (head->val <=insertVal && head->next->val >=insertVal) ||
                (head->val >=insertVal && head->next->val >=insertVal && head->val > head->next->val) ||
                (head->val <=insertVal && head->next->val <=insertVal && head->val > head->next->val) ||
                (head==head->next || (head->val==head->next->val && head->val==insertVal) ||
                head->next == ret)
              )
            {
                Node* add = new Node();
                add->val = insertVal;
                add->next = head->next;
                head->next = add;
                break;
            }
            head = head->next;
        }
        return ret;
    }
};