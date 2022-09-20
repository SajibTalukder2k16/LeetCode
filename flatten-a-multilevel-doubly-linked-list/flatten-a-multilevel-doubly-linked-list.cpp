/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatIt(Node* head){
        Node* prevNode = NULL;
        Node* lastNode = NULL;
        Node* entryNode = NULL;
        while(head!=NULL){
            // cout<<head->val<<endl;
            prevNode = head;
            if(head->child!=NULL){
                entryNode = head->child;
                lastNode = flatIt(head->child);
                lastNode->next = prevNode->next;
                if(prevNode->next!=NULL)
                    prevNode->next->prev=lastNode;
                entryNode->prev = prevNode;
                prevNode->next = entryNode;
                head->child = NULL;
                head=lastNode->next;
                prevNode = lastNode;
            }
            else
                head = head->next;
        }
        return prevNode;
    }
    Node* flatten(Node* head) {
        flatIt(head);
        return head;
    }
};