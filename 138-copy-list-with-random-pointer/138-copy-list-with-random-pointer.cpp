/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        Node* h1 = head;
        Node* copy = new Node(0);
        map<Node*,int>main_map;
        map<int,Node*>copy_map;
        Node* copyHead = copy;
        int cnt = 0;
        while(h1!=NULL){
            main_map[h1]=++cnt;
            copy_map[cnt]=copy;
            copy->val=h1->val;
            if(h1->next==NULL)
            {
                copy->next = NULL;
                break;
            }
            Node* temp = new Node(0);
            copy->next = temp;
            copy = temp;
            h1=h1->next;
        }
        copy = copyHead;
        h1 = head;
        Node* add = NULL;
        while(h1!=NULL)
        {
            // cout<<h1<<" "<<main_map[h1]<<" "<<copy_map[1]<<endl;
            add = copy_map[main_map[h1->random]];
            copy->random = add;
            //cout<<copy->val<<endl;
            h1=h1->next;
            copy = copy->next;
        }
        return copyHead;
    }
};